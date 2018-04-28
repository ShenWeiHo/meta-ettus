FILESEXTRAPATHS_prepend := "${THISDIR}/linux-yocto-4.15:"

SRC_URI_append_ni-e31x = " \
                         file://defconfig \
                         file://e31x.scc \
                         file://e31x.cfg \
                        "
 

COMPATIBLE_MACHINE_ni-e31x = "ni-e31x"

KCONFIG_MODE ?= "--alldefconfig"
