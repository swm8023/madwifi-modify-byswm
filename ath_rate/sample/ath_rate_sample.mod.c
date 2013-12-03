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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x449a00d5, "ieee80211_proc_vcreate" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6ae929df, "ieee80211_rate_register" },
	{ 0x2bc95bd4, "memset" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xb4390f9a, "mcount" },
	{ 0x8d839882, "ieee80211_rate_unregister" },
	{ 0xf3a00e77, "ieee80211_iterate_nodes" },
	{ 0x125059d3, "module_put" },
	{ 0x43ff78f1, "kmem_cache_alloc_trace" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x4d01344c, "ath_hal_computetxtime" },
	{ 0x37a0cba, "kfree" },
	{ 0x59177771, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlan,ath_hal";


MODULE_INFO(srcversion, "94CBED96F517637959D2141");
