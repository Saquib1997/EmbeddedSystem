#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

static int __init FirstDriver_init(void)
{
	printk(KERN_ALERT "\nI am inside the init section ------> Hello Everyone\n");
	printk(KERN_ALERT "\nHow are you all\n");
return 0;
}

static void __exit FirstDriver_exit(void)
{
	printk(KERN_ALERT "\nI am inside the cleanup section ------> Bye Everyone\n");
	printk(KERN_ALERT "\nTake care all of you :)\n");
}

module_init(FirstDriver_init);
module_exit(FirstDriver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SAQUIB");
MODULE_DESCRIPTION("Simple linux driver (Statically allocating the Major and Minor number)");
