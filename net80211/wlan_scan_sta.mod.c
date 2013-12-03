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
	{ 0x1cb9af37, "kmalloc_caches" },
	{ 0x3075477, "ieee80211_print_essid" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x5f729065, "ieee80211_chan2mode" },
	{ 0x41aa60e3, "ieee80211_scanner_unregister_all" },
	{ 0x2c1b6439, "ieee80211_saveie" },
	{ 0x34ac0b86, "ieee80211_chan2ieee" },
	{ 0xd5c0822d, "ieee80211_scanner_register" },
	{ 0xb9ecbe09, "ieee80211_bg_scan" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2a72d277, "ieee80211_note_mac" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x38385049, "ieee80211_sta_join" },
	{ 0x50eedeb8, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb4390f9a, "mcount" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x30edfae4, "ieee80211_start_scan" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x125059d3, "module_put" },
	{ 0xd34951a0, "ieee80211_note" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbcfea70e, "ieee80211_create_ibss" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x43ff78f1, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x71ac80, "ieee80211_scan_dump_channels" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x49798602, "ieee80211_find_channel" },
	{ 0x59177771, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlan";


MODULE_INFO(srcversion, "E8794DAE89567F1F99F9ECE");
