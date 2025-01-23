#include <linux/module.h>
#include <linux/printk.h>
#include "../include/foo.h"

void foo2(void)
{
    pr_info("Hello from foo2!\n");
}
EXPORT_SYMBOL(foo2);