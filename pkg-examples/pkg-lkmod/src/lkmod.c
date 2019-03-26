#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

//#if (!defined(HW_MODEL_WLRGFM_101) && !defined(HW_MODEL_WLRRTMS_104))

#if !defined(HW_MODEL_WLRGFM_101) && !defined(HW_MODEL_WLRRTMS_104)
	#error please select a hardware model in `make menuconfig`.
#endif

static int __init lkm_example_init (void)
{
	printk(KERN_INFO "Hello, World!\n");
	return 0;
}

static void __exit lkm_example_exit (void)
{
	printk(KERN_INFO "Goodbye, World!\n");
}

module_init(lkm_example_init);
module_exit(lkm_example_exit);
MODULE_LICENSE("GPL");

