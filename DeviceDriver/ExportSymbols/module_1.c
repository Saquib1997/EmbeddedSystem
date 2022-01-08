#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
#include<linux/kernel.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("I am SAQUIB");
static int add(int a, int b)
{
	return (a + b);
}
EXPORT_SYMBOL(add);
static int __init hello_init(void)
{
	printk(KERN_ALERT "\nInside init section\n");
	printk(KERN_ALERT "Hello to all\n");
	return 0;
}
static void __exit hello_exit(void)
{
	printk(KERN_ALERT "\nInside exit section\n");
	printk(KERN_ALERT "Bye to all\n");
}
module_init(hello_init);
module_exit(hello_exit);
