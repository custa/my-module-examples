#include <linux/module.h>
#include <linux/printk.h>
#include "../include/foo.h"

void foo1(void)
{
    pr_info("Hello from foo1!\n");
}
EXPORT_SYMBOL(foo1);