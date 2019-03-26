include $(TOPDIR)/rules.mk

PKG_NAME:=pkg-userapp
PKG_VERSION:=1.0.0
PKG_RELEASE:=1

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
#PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
#PKG_HASH:=9b7dc52656f5cbec846a7ba3299f73bd

include $(INCLUDE_DIR)/package.mk

define Package/pkg-userapp
  CATEGORY:=ODM Properties
  SUBMENU:=Applications
  TITLE:= A user-space application example
endef

define Package/pkg-userapp/description
  This is a simple user-space application 
for the Conditional-Compilation demonstration.
endef

define Build/Prepare
	$(call Build/Prepare/Default)
endef

define Build/Compile
	$(call Build/Compile/Default)
endef

define Build/InstallDev
endef

define Package/pkg-userapp/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/userapp $(1)/usr/bin/
endef

$(eval $(call BuildPackage,pkg-userapp))

