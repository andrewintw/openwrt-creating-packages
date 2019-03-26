# openwrt-creating-packages
examples for creating your own packages in OpenWRT.


## How To Use


1.clone the repo and put all in a folder. For example in `$(TOPDIR)/package/proprietary`


	package/proprietary/
	├── Config.in
	└── pkg-examples
	    ├── pkg-linklib
	    │   ├── Makefile
	    │   └── src
	    │       ├── linklib.c
	    │       └── Makefile
	    ├── pkg-lkmod
	    │   ├── Makefile
	    │   └── src
	    │       ├── lkmod.c
	    │       └── Makefile
	    ├── pkg-shared
	    │   ├── Makefile
	    │   └── src
	    │       ├── include
	    │       │   └── pkgshared.h
	    │       ├── Makefile
	    │       └── pkgshared.c
	    └── pkg-userapp
	        ├── Makefile
	        └── src
	            ├── Makefile
	            └── userapp.c

2.Edit $(TOPDIR)/Config.in and source the Config.in in repo. For example:


	$ vi $(TOPDIR)/Config.in
	...
	..
	.
	source "package/proprietary/Config.in"


3.make menuconfig


	$ make menuconfig
		ODM Properties  --->

			Applications  --->
				< > pkg-linklib
				< > pkg-userapp

			Kernel Modules  --->
				< > kmod-pkg-lkmod

			Libraries  --->
				< > pkg-shared


4.build it

For example:

	$ make package/pkg-linklib/{clean,prepare,compile} V=s


~ END ~