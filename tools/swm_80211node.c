
#include <sys/types.h>
#include <sys/file.h>
#include <sys/ioctl.h>
#include <sys/socket.h>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>
#include <getopt.h>
#include <err.h>

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

static int get_list_nodes(const char *);

int
main(int argc, char *argv[])
{
	const char *ifname, *cmd;

	ifname = argv[1];
	cmd = argv[2];
	if (streq(cmd, "liststa")) {
		get_list_nodes(ifname);
	} 
	return 0;
}

static int 
do80211priv(struct iwreq *iwr, const char *ifname, int op, void *data, size_t len) {
	int sockfd = socket(AF_INET, SOCK_DGRAM, 0);

	memset(iwr, 0, sizeof (struct iwreq));
	strncpy(iwr->ifr_name, ifname, IFNAMSIZ);

	iwr->u.data.pointer = data;
	iwr->u.data.length = len;

	if (ioctl(sockfd, op, iwr) < 0)
		return -1;
	return 0;
}

static int
get_list_nodes(const char *ifname)
{
	struct ieee80211req_nodelistinfo nodes;
	struct iwreq iwr;
	size_t len = sizeof (nodes);
	if ((do80211priv(&iwr, ifname, IEEE80211_IOCTL_GETNODES, &nodes, len)) < 0)
	
		return -1;
	


	return 0;
}