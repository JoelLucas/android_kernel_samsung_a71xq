#
# Makefile for usb typec manager drivers
#

obj-$(CONFIG_USB_TYPEC_MANAGER_NOTIFIER)     += usb_typec_manager_notifier.o
obj-$(CONFIG_IF_CB_MANAGER)			+= if_cb_manager.o
GCOV_PROFILE := $(CONFIG_KUNIT)
obj-$(CONFIG_KUNIT) += test/
