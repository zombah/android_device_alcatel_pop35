# Boot animation
TARGET_SCREEN_WIDTH := 480
TARGET_SCREEN_HEIGHT := 854

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Inherit device configuration
$(call inherit-product, device/alcatel/pop35/pop35.mk)

# Device identifier. This must come after all inclusions
PRODUCT_DEVICE := pop35
PRODUCT_NAME := cm_pop35
PRODUCT_BRAND := Alcatel
PRODUCT_MODEL := 5065D
PRODUCT_MANUFACTURER := TCL
PRODUCT_RELEASE_NAME := LMY47V

# Set build fingerprint / ID / Product Name ect.
PRODUCT_BUILD_PROP_OVERRIDES += \
    PRIVATE_BUILD_DESC="Pop35-user 5.1.1 LMY47V vA73-0 release-keys" \
    BUILD_FINGERPRINT="TCL/5065D/Pop35:5.1.1/LMY47V/vA73-0:user/release-keys"

PRODUCT_GMS_CLIENTID_BASE := android-alcatel

# Build signing
ifneq ($(wildcard vendor/paz00/cert/releasekey*),)
	PRODUCT_DEFAULT_DEV_CERTIFICATE := vendor/paz00/cert/releasekey
endif
