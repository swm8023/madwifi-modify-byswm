
#include <sys/types.h>
#include <sys/file.h>
#include <sys/time.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>
#include <getopt.h>
#include <unistd.h>
#include <errno.h>

#include <include/compat.h>

#include "wireless_copy.h"
#include "net80211/ieee80211.h"
#include "net80211/ieee80211_crypto.h"
#include "net80211/ieee80211_ioctl.h"

#define IEEE80211_NODE_TURBOP	0x0001		/* Turbo prime enable */
#define IEEE80211_NODE_COMP	0x0002		/* Compression enable */
#define IEEE80211_NODE_FF	0x0004          /* Fast Frame capable */
#define IEEE80211_NODE_XR	0x0008		/* Atheros WME enable */
#define IEEE80211_NODE_AR	0x0010		/* AR capable */
#define IEEE80211_NODE_BOOST	0x0080

#define	streq(a,b)	(strncasecmp(a, b, sizeof(b) - 1) == 0)

#define max(a,b) ((a)>(b)?(a):(b))
#define err_exit(fmt, args...) do { \
	printf(fmt"\n", ## args); \
	_exit(-1); \
}while(0)
#define sys_info(fmt, args...) do { \
	printf(fmt"\n", ## args); \
}while(0)


#define UPLOAD_TIME 5


struct upload_info {
	int stas;
	struct ieee80211_nodeinfo node[IEEE80211_MAX_NODEINFO];

};


static int get_list_nodes(const char *);
static int add_node(const char*, struct ieee80211_nodeinfo*);
static int test_add_node(const char*);
static int connect_server(const char *, const char *);
static int connect_and_work(const char *, const char *, const char *);
static int devioctl(const char *ifname, int op, void *data, int len);
int
main(int argc, char *argv[])
{
	const char *ifname, *cmd;
	ifname = argv[1];
	cmd = argv[2];
	if (ifname == NULL) 
		err_exit("incorrect parameters");
	//connect to server, start work
	if (streq(cmd, "conn")) {
		connect_and_work(ifname, argv[3], argv[4]);
	} else if(streq(cmd, "test")){

	}
	
	return 0;
}

static int connect_server(const char *ip_str, const char *port_str) {
	if (ip_str == NULL || port_str == NULL) 
		err_exit("incorrect parameters");
	int sockfd;
	in_port_t port;
	struct sockaddr_in addr;
	//init the address
	memset(&addr, 0, sizeof addr);
	addr.sin_family = AF_INET;
	if ((inet_pton(AF_INET, ip_str, &addr.sin_addr) <= 0)
		|| ((port = atoi(port_str)) == 0))
		return -1;
	addr.sin_port = htons(port);
	//new socket && connect
	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
		return -1;
	if (connect(sockfd, (struct sockaddr*)&addr, sizeof addr) < 0)
		return -1; 
	return sockfd;
}
static int do_update_stainfo(int fd, const char *ifname) {
	ssize_t n;
	struct ieee80211req_nodelistoper oper;
	int oplen = sizeof(struct ieee80211req_nodelistoper);
	errno = 0;
	n = recv(fd, &oper, sizeof(oper), MSG_WAITALL);
	if (n <= 0 && errno != EWOULDBLOCK) {
		close(fd);
		sys_info("socket closed(%d) %s", n, strerror(errno));
	} else if (n == oplen) {
		sys_info("receive update, op = %d", oper.node_oper);




	} else if (n < oplen) {
		sys_info("receive error(%d < %d)",  n, oplen);
	}	
}
static int do_upload_stainfo(int sockfd, const char *ifname) {
	struct upload_info up;
	struct ieee80211_nodeinfo *nodes;
	int i, n;

	int nodelen = sizeof(struct ieee80211_nodeinfo);
	//ioctl to get node info
	int len = nodelen * IEEE80211_MAX_NODEINFO, iwlen;
	nodes = malloc(len);	
	memset(nodes, 0, len);
	if ((iwlen = devioctl(ifname, IEEE80211_IOCTL_GETNODELISTINFO, nodes, len)) < 0) {	
		sys_info("dev ioctl error");
		return -1;
	}
	//complete struct upload_info
	memset(&up, 0, sizeof up);
	up.stas = iwlen / nodelen;
	memcpy(&up.node[0], nodes, iwlen);
	//send to server
	n = write(sockfd, &up, sizeof up);
	free(nodes);
	sys_info("send %d bytes to server", n);
	return 0;
}

static int work_select(int infd, int sockfd, const char *ifname) {
	fd_set rset;
	int maxfd = max(infd, sockfd) + 1;
	int nsel;
	time_t last_upload = -1, now;
	struct timeval tm;
	FD_ZERO(&rset);
	for (;;) {
		//init && select
		FD_SET(infd, &rset);
		FD_SET(sockfd, &rset);
		tm.tv_sec = UPLOAD_TIME;
		tm.tv_usec = 0;
		nsel = select(maxfd, &rset, NULL, NULL, &tm);
		//receive command from console
		if (nsel && FD_ISSET(infd, &rset)) {
			nsel--;

		}
		//receive command from server
		if (nsel && FD_ISSET(sockfd, &rset)) {
			do_update_stainfo(sockfd, ifname);
			nsel--;

		}
		//upload info to server
		now = time(NULL);
		if (now >= last_upload + UPLOAD_TIME) {
			last_upload = now;
			do_upload_stainfo(sockfd, ifname);
		}
	}
}


static int connect_and_work(const char *ifname, const char *ip, const char *port) {
	int sockfd;
	if ((sockfd = connect_server(ip, port)) < 0) {
		err_exit("connect failed: %s", strerror(errno));
	} else {
		sys_info("connect to %s:%s", ip, port);
	}

	work_select(fileno(stdin), sockfd, ifname);
	return 0;
}
static int devioctl(const char *ifname, int op, void *data, int len) {
	struct iwreq iwr;
	int sockfd = socket(AF_INET, SOCK_DGRAM, 0);

	memset(&iwr, 0, sizeof(iwr));
	strncpy(iwr.ifr_name, ifname, sizeof(iwr.ifr_name));
	
	iwr.u.data.pointer = data;
	//must less 65536
	iwr.u.data.length = len;

	if (ioctl(sockfd, op, &iwr) < 0) {
		perror("IOCTL ERROR: ");
		return -1;
	}
	return iwr.u.data.length;
}



static int
get_list_nodes(const char *ifname)
{
	struct ieee80211_nodeinfo *nodes;
	int nodelen = sizeof(struct ieee80211_nodeinfo);
	int len = nodelen * IEEE80211_MAX_NODEINFO;
	nodes = malloc(len);
	
	memset(nodes, 0, len);
	if (devioctl(ifname, IEEE80211_IOCTL_GETNODELISTINFO, nodes, len) < 0)
		return -1;

	return 0;
}
static int
add_node(const char *ifname, struct ieee80211_nodeinfo *node){
	struct ieee80211req_nodelistoper *oper;
	int len = sizeof (struct ieee80211req_nodelistoper);
	oper = malloc(len);
	memset(oper, 0, len);
	oper->node_oper = IEEE80211_NODELIST_ADD;
	memcpy(&oper->node, node, sizeof(*node));
	if (devioctl(ifname, IEEE80211_IOCTL_NODELISTOPER, oper, len) < 0)
		return -1;

	free(oper);
	return 0;
}
static int
test_add_node(const char *ifname) {
	struct ieee80211_nodeinfo node;
	memset(&node, 0, sizeof(node));
	u_int8_t macaddr[]={0x06, 0x14, 0x78, 0x72, 0x31, 0xCA};
	memcpy(&node.ni_macaddr, macaddr, 6);

	add_node(ifname, &node);
}
