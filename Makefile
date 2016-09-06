KERNEL_HEADER_PATH ?= /lib/modules/$(shell uname -r)
KERNEL_BUILD_PATH = $(KERNEL_HEADER_PATH)/build

obj-m += 01_hello-world.o

all:
		make -C "$(KERNEL_BUILD_PATH)" M=$(PWD) modules

clean:
		make -C "$(KERNEL_BUILD_PATH)" M=$(PWD) clean
