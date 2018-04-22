#include <linux/module.h>

static int __init my_init(void)
{
  printk(KERN_DEBUG "Hello World!");
  return 0;
}

static void __exit my_exit(void)
{
}

module_init(my_init);
module_exit(my_exit);

MODULE_DESCRIPTION("This is task 01 of the Eudyptula challenge");
MODULE_AUTHOR("Martin Williams <martin.c.willias@hotmail.com>");
MODULE_LICENSE("GPL");

