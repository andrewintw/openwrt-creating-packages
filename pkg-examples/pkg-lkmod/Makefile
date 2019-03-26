include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk

PKG_NAME:=pkg-lkmod
PKG_VERSION:=1.0.0
PKG_RELEASE:=1

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
#PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
#PKG_HASH:=9b7dc52656f5cbec846a7ba3299f73bd

include $(INCLUDE_DIR)/package.mk

define KernelPackage/pkg-lkmod
  CATEGORY:=ODM Properties
  SUBMENU:=Kernel Modules
  TITLE:=A kernel module example
  FILES:=$(PKG_BUILD_DIR)/lkmod.ko
  KCONFIG:=
  AUTOLOAD:=$(call AutoLoad,30,lkmod)
endef

define KernelPackage/pkg-lkmod/description
  This is a simple kernel module example.
endef

define Build/Prepare
	$(call Build/Prepare/Default)
endef

MAKE_OPTS := \
			ARCH="$(LINUX_KARCH)" \
			CROSS_COMPILE="$(TARGET_CROSS)" \
			SUBDIRS="$(PKG_BUILD_DIR)" \
			EXTRA_CFLAGS="$(EXTRA_CFLAGS)"  \
			V=1

define Build/Compile
	env
	$(MAKE) -C "$(LINUX_DIR)" \
		$(MAKE_OPTS) \
		modules
endef

$(eval $(call KernelPackage,pkg-lkmod))

