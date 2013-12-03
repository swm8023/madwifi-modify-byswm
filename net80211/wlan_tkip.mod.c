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
	{ 0xcea8496, "ieee80211_crypto_register" },
	{ 0xa3139e59, "ieee80211_notify_replay_failure" },
	{ 0xafc87b28, "skb_trim" },
	{ 0x2a72d277, "ieee80211_note_mac" },
	{ 0x50eedeb8, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xb4390f9a, "mcount" },
	{ 0xf54e7f90, "skb_push" },
	{ 0x9b9c746c, "skb_pull" },
	{ 0x125059d3, "module_put" },
	{ 0xd34951a0, "ieee80211_note" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc5e4af3a, "ieee80211_crypto_unregister" },
	{ 0x43ff78f1, "kmem_cache_alloc_trace" },
	{ 0x81d195db, "ieee80211_notify_michael_failure" },
	{ 0x37a0cba, "kfree" },
	{ 0x8235805b, "memmove" },
	{ 0x87872a1e, "skb_put" },
	{ 0x59177771, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlan";


MODULE_INFO(srcversion, "AC26A819CF4101A17C4AE30");
