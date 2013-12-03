
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

static void list_stations(const char *);

int
main(int argc, char *argv[])
{
	const char *ifname, *cmd;

	ifname = argv[1];
	cmd = argv[2];
	if (streq(cmd, "list")) {
		if (argc > 3) {
			const char *arg = argv[3];
			if (streq(arg, "sta"))
				list_stations(ifname);
		}
	} 
	return 0;
}


static void
list_stations(const char *ifname)
{
	uint8_t buf[24 * 1024];
	struct iwreq iwr;
	uint8_t *cp;
	int s, len;

	s = socket(AF_INET, SOCK_DGRAM, 0);
	if (s < 0)
		err(1, "socket(SOCK_DGRAM)");

	(void) memset(&iwr, 0, sizeof(iwr));
	(void) strncpy(iwr.ifr_name, ifname, sizeof(iwr.ifr_name));
	iwr.u.data.pointer = (void *)buf;
	iwr.u.data.length = sizeof(buf);
	if (ioctl(s, IEEE80211_IOCTL_STA_INFO, &iwr) < 0)
		errx(1, "unable to get station information");
	len = iwr.u.data.length;
	if (len < sizeof(struct ieee80211req_sta_info))
		return;
	close(s);

	cp = buf;
	do {
		struct ieee80211req_sta_info *si;
		uint8_t *vp;

		si = (struct ieee80211req_sta_info *)cp;
		vp = (u_int8_t *)(si+1);

		cp += si->isi_len;
		len -= si->isi_len;
	} while (len >= sizeof(struct ieee80211req_sta_info));
}