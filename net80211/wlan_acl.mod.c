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
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x50eedeb8, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xb4390f9a, "mcount" },
	{ 0x125059d3, "module_put" },
	{ 0xd34951a0, "ieee80211_note" },
	{ 0x7f27d765, "ieee80211_aclator_register" },
	{ 0x43ff78f1, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ec20c5a, "ieee80211_aclator_unregister" },
	{ 0x59177771, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlan";


MODULE_INFO(srcversion, "917DCAF903372D03E980589");
