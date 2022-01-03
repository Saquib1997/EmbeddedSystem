#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("I Am Saquib");
static int __init Hello_init(void)
{
        printk(KERN_ALERT "Hello to all\n");
        return 0;
}       
static void __exit Hello_exit(void)
{       
        printk(KERN_ALERT "Bye to all\n");
}       
module_init(Hello_init);
module_exit(Hello_exit);

