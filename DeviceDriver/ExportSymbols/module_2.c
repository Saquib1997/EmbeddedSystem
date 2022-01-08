#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
#include<linux/kernel.h>
#include"my_add.h"
MODULE_LICENSE("GPL");
MODULE_AUTHOR("I am SAQUIB");
static int x=1;
static int y=2;
static int __init myadd_init(void)
{
        printk(KERN_ALERT "\nWe are going to add\n");
        printk(KERN_ALERT "\nAdd result is: %d\n",add(x,y));
        return 0;
}
static void __exit myadd_exit(void)
{
        printk(KERN_ALERT "\n We are leaving\n");
}
module_init(myadd_init);
module_exit(myadd_exit);
