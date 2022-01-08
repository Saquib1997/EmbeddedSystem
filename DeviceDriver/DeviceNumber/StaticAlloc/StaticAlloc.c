#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/fs.h>
#include<linux/kdev_t.h>
#include<linux/types.h>

//dev_t mydev = MKDEV(80,0);

static int __init StaticAlloc_init(void)
{
	dev_t mydev;
        //int maj, min;
        mydev = MKDEV(80,0);
        //maj = MAJOR(mydev);
        //min = MINOR(mydev);
	if(register_chrdev_region(mydev, 1, "MyFirstDevice")==0)
	printk(KERN_ALERT "Device number allocated");
	else
	printk(KERN_ALERT "Device number not allocated");
	printk(KERN_ALERT "In Init section ----> Creating Device Number");
	printk(KERN_ALERT "The Major number: %d and The Minor number: %d",MAJOR(mydev),MINOR(mydev));
	printk(KERN_ALERT "Check In Init section ----> Creating Device Number");
	return 0;
}

static void __exit StaticAlloc_exit(void)
{
	dev_t mydev;
        //int maj, min;
        mydev = MKDEV(80,0);
        //maj = MAJOR(mydev);
        //min = MINOR(mydev);
	unregister_chrdev_region(mydev, 1);
	printk(KERN_ALERT "In Cleanup section ----> Removing the Driver");
}

module_init(StaticAlloc_init);
module_exit(StaticAlloc_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SAQUIB");
MODULE_DESCRIPTION("Simple linux driver (Statically allocating the Major and Minor number)");
	
