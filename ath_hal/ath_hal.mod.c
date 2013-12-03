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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x74bb2181, "register_sysctl_table" },
	{ 0xd0d8621b, "strlen" },
	{ 0x78db38d3, "proc_dointvec" },
	{ 0x2bc95bd4, "memset" },
	{ 0x50eedeb8, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6c2e3320, "strncmp" },
	{ 0x125059d3, "module_put" },
	{ 0xcb07f41d, "unregister_sysctl_table" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7afa89fc, "vsnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xb81960ca, "snprintf" },
	{ 0x436c2179, "iowrite32" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x59177771, "try_module_get" },
	{ 0xe484e35f, "ioread32" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "58AE8F8D00EB0FC39D20F29");
