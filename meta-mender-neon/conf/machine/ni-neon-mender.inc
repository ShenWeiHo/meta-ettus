MACHINEOVERRIDES =. "ni-neon-mender:"

# Stay within 16GB of SD Card
MENDER_STORAGE_TOTAL_SIZE_MB ?= "15180"
MENDER_DATA_PART_SIZE_MB ?= "11196"
MENDER_BOOT_PART_SIZE_MB ?= "16"
MENDER_STORAGE_DEVICE = "/dev/mmcblk0"

# force a fixed partitioning (Mender default values as of OE sumo release)
MENDER_PARTITIONING_OVERHEAD_KB ?= "32768"
MENDER_PARTITION_ALIGNMENT ?= "8388608"
MENDER_RESERVED_SPACE_BOOTLOADER_DATA ?= "16777216"

MENDER_FEATURES_ENABLE_append_ni-neon-mender = " mender-uboot mender-image mender-systemd mender-image-sd"
MENDER_FEATURES_DISABLE_append_ni-neon-mender = " mender-grub mender-image-uefi"
