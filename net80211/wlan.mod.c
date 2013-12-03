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
	{ 0xcc549f3e, "register_netdevice" },
	{ 0x402b8281, "__request_module" },
	{ 0x1cb9af37, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd220cf8a, "jiffies_to_timespec" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x74bb2181, "register_sysctl_table" },
	{ 0xc996d097, "del_timer" },
	{ 0xd0d8621b, "strlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x78db38d3, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2000b43d, "netif_carrier_on" },
	{ 0xa4eb4eff, "_raw_spin_lock_bh" },
	{ 0x6b59bea6, "skb_copy" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x16a858c1, "netif_carrier_off" },
	{ 0x2ad04077, "remove_proc_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0x490997f0, "skb_realloc_headroom" },
	{ 0x3e4db22e, "sysfs_remove_group" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xafc87b28, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe13fb82c, "__netdev_alloc_skb" },
	{ 0x93f14fff, "netif_rx" },
	{ 0x2bc95bd4, "memset" },
	{ 0x45a79637, "proc_mkdir" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x50eedeb8, "printk" },
	{ 0xfe31e381, "sysfs_create_group" },
	{ 0x5152e605, "memcmp" },
	{ 0x7c1372e8, "panic" },
	{ 0xb2383607, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x1431e491, "wireless_send_event" },
	{ 0x6c2e3320, "strncmp" },
	{ 0xf54e7f90, "skb_push" },
	{ 0x1abe0784, "dev_close" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0x9b9c746c, "skb_pull" },
	{ 0xefaceb4b, "init_net" },
	{ 0x419afa96, "dev_kfree_skb_any" },
	{ 0xc57ab7bc, "proc_dostring" },
	{ 0x4824f5e9, "dev_open" },
	{ 0x61651be, "strcat" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x125059d3, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2dbd7c6, "skb_copy_expand" },
	{ 0xcb07f41d, "unregister_sysctl_table" },
	{ 0x8bf826c, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x4292364c, "schedule" },
	{ 0xcbcafc1b, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xd78b6795, "create_proc_entry" },
	{ 0xf1b8ddca, "pskb_expand_head" },
	{ 0x43ff78f1, "kmem_cache_alloc_trace" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x9ce67994, "unregister_netdevice_queue" },
	{ 0x7afa89fc, "vsnprintf" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xec911e99, "dev_alloc_name" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8235805b, "memmove" },
	{ 0xa9b67b90, "dev_queue_xmit" },
	{ 0x87872a1e, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x59177771, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1AC69DD151323EFD6847996");
