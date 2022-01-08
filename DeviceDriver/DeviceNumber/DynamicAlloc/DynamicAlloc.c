#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/fs.h>
#include<linux/kdev_t.h>
#include<linux/types.h>


static int __init DynamicAlloc_init(void)
{
	dev_t mydev;
        int maj, min;
        maj = MAJOR(mydev);
        min = MINOR(mydev);
	alloc_chrdev_region(&mydev, 0, 1, "MySecondDevice");
	printk("In Init section ----> Creating Device Number");
	printk("The Major number is %d and The Minor number is %d",maj,min);
	return 0;
}

static void __exit DynamicAlloc_exit(void)
{
	dev_t mydev;
        int maj, min;
        maj = MAJOR(mydev);
        min = MINOR(mydev);
	unregister_chrdev_region(mydev, 1);
	printk("In Cleanup section ----> Removing the Driver");
}

module_init(DynamicAlloc_init);
module_exit(DynamicAlloc_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SAQUIB");
MODULE_DESCRIPTION("Simple linux driver (Dynamically allocating the Major and Minor number)");
