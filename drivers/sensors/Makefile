# SPDX-License-Identifier: GPL-2.0-only
obj-$(CONFIG_SENSORS_SSC)	+= sensors_ssc.o
obj-$(CONFIG_SENSORS)		+= sensors_core.o

# grip sensor
obj-$(CONFIG_SENSORS_SX9360)		+= sx9360.o
#
# Makefile for grip sensors
#

obj-$(CONFIG_SENSORS_SX9360)  		+= sx9360.o
obj-$(CONFIG_SENSORS_SX9360_SUB)	+= sx9360_sub.o

GCOV_PROFILE := $(CONFIG_KUNIT)
obj-$(CONFIG_KUNIT) += test/
