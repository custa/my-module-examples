ifneq ($(KERNELRELEASE),)
# Called from kernel build system
obj-m := multi-dirs.o
multi-dirs-objs := foo/foo1.o foo/foo2.o bar/bar.o
ccflags-y := -I$(src)/include
else
# Normal make
KDIR ?= /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
endif