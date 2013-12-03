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
	{ 0xc293a804, "proc_dointvec_minmax" },
	{ 0x1cb9af37, "kmalloc_caches" },
	{ 0x74bb2181, "register_sysctl_table" },
	{ 0x78db38d3, "proc_dointvec" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6ae929df, "ieee80211_rate_register" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x8d839882, "ieee80211_rate_unregister" },
	{ 0xf3a00e77, "ieee80211_iterate_nodes" },
	{ 0x125059d3, "module_put" },
	{ 0xcb07f41d, "unregister_sysctl_table" },
	{ 0x43ff78f1, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x59177771, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlan";


MODULE_INFO(srcversion, "2AB7A8BCC77B75189F64E11");
