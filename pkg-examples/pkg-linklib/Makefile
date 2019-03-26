include $(TOPDIR)/rules.mk

PKG_NAME:=pkg-linklib
PKG_VERSION:=1.0.0
PKG_RELEASE:=1

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
#PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
#PKG_HASH:=9b7dc52656f5cbec846a7ba3299f73bd

include $(INCLUDE_DIR)/package.mk

define Package/pkg-linklib
  CATEGORY:=ODM Properties
  SUBMENU:=Applications
  TITLE:=A linked shared library application
  DEPENDS:=+pkg-shared
endef

define Package/pkg-linklib/description
  This is an example shows how to link a shared-lib.
endef

define Build/Prepare
	$(call Build/Prepare/Default)
endef

define Build/Compile
	$(call Build/Compile/Default)
endef

define Build/InstallDev
endef

define Package/pkg-linklib/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/linklib $(1)/usr/bin/
endef

$(eval $(call BuildPackage,pkg-linklib))

