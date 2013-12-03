#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x84b3ef83, "module_layout" },
	{ 0x7694c504, "ath_hal_getwirelessmodes" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0x1cb9af37, "kmalloc_caches" },
	{ 0xeac862a8, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x16da2ce5, "ieee80211_cancel_scan" },
	{ 0x96570a18, "ieee80211_find_txnode" },
	{ 0xa6dc6d15, "ieee80211_getrssi" },
	{ 0xc00a9a89, "mem_map" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x74bb2181, "register_sysctl_table" },
	{ 0x5f729065, "ieee80211_chan2mode" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x17c2c6ed, "ieee80211_crypto_encap" },
	{ 0xc996d097, "del_timer" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0x9ef56934, "ieee80211_dturbo_switch" },
	{ 0xd0d8621b, "strlen" },
	{ 0xc02ad26, "dev_set_drvdata" },
	{ 0x217d4b4b, "ath_hal_init_channels" },
	{ 0x3bacaa5a, "dma_set_mask" },
	{ 0x78db38d3, "proc_dointvec" },
	{ 0x76adfcd6, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3d14c1ef, "ieee80211_state_name" },
	{ 0x6b59bea6, "skb_copy" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x34ac0b86, "ieee80211_chan2ieee" },
	{ 0xac375e78, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x593a99b, "init_timer_key" },
	{ 0xeda64a15, "ieee80211_mark_dfs" },
	{ 0xd3e7b566, "ieee80211_announce" },
	{ 0xab080de9, "ieee80211_vap_detach" },
	{ 0x35eb5332, "ieee80211_start_running" },
	{ 0x56e04ec7, "ieee80211_media_status" },
	{ 0x71f922d4, "ieee80211_input_all" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xafc87b28, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1009d14d, "ieee80211_wme_acnames" },
	{ 0x940b2ded, "ieee80211_create_vap" },
	{ 0x5189e382, "ieee80211_send_qosnulldata" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0x6d7c4b15, "pci_set_master" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x8bbe97ba, "ieee80211_rate_detach" },
	{ 0x8ddb42b5, "pci_restore_state" },
	{ 0xdf60cc27, "__print_symbol" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x31b398a6, "ath_hal_print_decoded_register" },
	{ 0x50eedeb8, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x877fee07, "ieee80211_rate_attach" },
	{ 0xde4e3fb8, "ath_hal_probe" },
	{ 0x80b53b09, "ieee80211_mhz2ieee" },
	{ 0xb2383607, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0x86baf2cb, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6c2e3320, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xeb8739f, "pci_bus_write_config_dword" },
	{ 0xedfec3e7, "ieee80211_ibss_merge" },
	{ 0xc1854531, "ieee80211_wme_updateparams" },
	{ 0x3e109067, "ieee80211_vap_attach" },
	{ 0xdd1a2871, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0xcea36d3a, "dma_release_from_coherent" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x9b9c746c, "skb_pull" },
	{ 0xf3a00e77, "ieee80211_iterate_nodes" },
	{ 0xc5737d73, "dma_alloc_from_coherent" },
	{ 0x523be7cc, "ieee80211_beacon_alloc" },
	{ 0x72cdd6f1, "ieee80211_beacon_miss" },
	{ 0xa70a1202, "ieee80211_media_change" },
	{ 0x1d92d743, "ieee80211_skb_untrack" },
	{ 0xb31b1dd0, "ath_debug_global" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc52d8b86, "ieee80211_crypto_delkey" },
	{ 0x4f2009e2, "_ath_hal_detach" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x6b719d8e, "__alloc_skb" },
	{ 0x686b7ff2, "ieee80211_cipher_none" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x99136f3a, "pci_bus_read_config_dword" },
	{ 0xcb07f41d, "unregister_sysctl_table" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x5259bf4, "ieee80211_stop_running" },
	{ 0xe025a138, "ath_hal_mhz2ieee" },
	{ 0x28a05c16, "alloc_netdev_mqs" },
	{ 0xa15f5f79, "ieee80211_dev_alloc_skb" },
	{ 0x723bd549, "ieee80211_ioctl_create_vap" },
	{ 0x3e756181, "ieee80211_dump_pkt" },
	{ 0x7c61340c, "__release_region" },
	{ 0x5af5f120, "pci_unregister_driver" },
	{ 0x7eebfe4c, "ether_setup" },
	{ 0x43ff78f1, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x9ed93c80, "ieee80211_crypto_setkey" },
	{ 0xffc34f3f, "pci_set_power_state" },
	{ 0x74660d3c, "ieee80211_crypto_newkey" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0xbd5ddf87, "pci_bus_write_config_byte" },
	{ 0x4d01344c, "ath_hal_computetxtime" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0bc0e3, "ieee80211_unref_node" },
	{ 0x2e60bace, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xb9acaeec, "ieee80211_dev_kfree_skb" },
	{ 0xc285cf53, "ieee80211_input_monitor" },
	{ 0xedc03953, "iounmap" },
	{ 0xc4554217, "up" },
	{ 0x83a3c6a4, "__pci_register_driver" },
	{ 0xc75945a1, "ieee80211_ifdetach" },
	{ 0x4e118654, "ieee80211_vap_setup" },
	{ 0x90bbcacf, "ieee80211_ref_node" },
	{ 0xd5cac943, "unregister_netdev" },
	{ 0x756981d2, "ieee80211_dev_kfree_skb_list" },
	{ 0x51196678, "ieee80211_skb_track" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1493e20, "__netif_schedule" },
	{ 0x8235805b, "memmove" },
	{ 0xbae4fd1e, "ieee80211_find_rxnode" },
	{ 0xdbe04ac0, "ath_hal_process_noisefloor" },
	{ 0x436c2179, "iowrite32" },
	{ 0x53cf966c, "ieee80211_beacon_update" },
	{ 0x87872a1e, "skb_put" },
	{ 0xf176eab2, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x7928e387, "dev_get_drvdata" },
	{ 0x9b7a9afd, "_ath_hal_attach" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe2f5580f, "dma_ops" },
	{ 0x1d9355f7, "ieee80211_ifattach" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4f239e4e, "ieee80211_input" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x995bd564, "pci_save_state" },
	{ 0x86783322, "ieee80211_encap" },
	{ 0x9579c5ed, "ieee80211_check_mic" },
	{ 0xe7c1f9a3, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath_hal,wlan";

MODULE_ALIAS("pci:v0000168Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000A727d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000101Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00009013sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A0D9230E772603872F9D79F");
