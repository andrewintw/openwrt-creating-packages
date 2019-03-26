include $(TOPDIR)/rules.mk

PKG_NAME:=pkg-shared
PKG_VERSION:=1.0.0
PKG_RELEASE:=1

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
#PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
#PKG_HASH:=9b7dc52656f5cbec846a7ba3299f73bd

include $(INCLUDE_DIR)/package.mk

define Package/pkg-shared
  CATEGORY:=ODM Properties
  SUBMENU:=Libraries
  TITLE:= A simple shared library example
endef

define Package/pkg-shared/description
  This is a simple shared library example.
endef

define Build/Prepare
	$(call Build/Prepare/Default)
endef

define Build/Compile
	$(call Build/Compile/Default)
endef

#define Build/InstallDev
#	$(INSTALL_DIR) $(1)/usr/lib/include
#	$(INSTALL_DATA) $(PKG_BUILD_DIR)/include/pkgshared.h $(1)/usr/lib/include
#endef

define Package/pkg-shared/install
	$(INSTALL_DIR) $(1)/usr/lib
	$(INSTALL_DATA) $(PKG_BUILD_DIR)/libpkgshared.so $(1)/usr/lib/

	$(INSTALL_DIR) $(TOOLCHAIN_DIR)/usr/include/pkgshared
	$(INSTALL_DATA) $(PKG_BUILD_DIR)/include/pkgshared.h $(TOOLCHAIN_DIR)/usr/include/pkgshared

	$(INSTALL_DIR) $(TOOLCHAIN_DIR)/usr/lib
	$(INSTALL_DATA) $(PKG_BUILD_DIR)/libpkgshared.so $(TOOLCHAIN_DIR)/usr/lib
endef

$(eval $(call BuildPackage,pkg-shared))

