#include <linux/module.h>
#include <linux/init.h>
#include <linux/printk.h>
#include "../include/foo.h"

static int __init bar_init(void)
{
    pr_info("Bar module loaded\n");
    foo1();
    foo2();
    return 0;
}

static void __exit bar_exit(void)
{
    printk(KERN_INFO "Bar module unloaded\n");
}

module_init(bar_init);
module_exit(bar_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("Bar module");
MODULE_SOFTDEP("pre: foo");