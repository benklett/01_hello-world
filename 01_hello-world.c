#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


static int __init hello_world_init(void) {
	printk(KERN_DEBUG "01_hello-world: Hello World!");
	return 0;
}

static void __exit hello_world_exit(void) {
	printk(KERN_DEBUG "01_hello-world: Unloaded");
}

module_init(hello_world_init);
module_exit(hello_world_exit);
