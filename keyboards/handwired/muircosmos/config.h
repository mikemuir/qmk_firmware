#pragma once

#define EE_HANDS // Store which side I am in EEPROM

/* Keyboard matrix assignments */
#define MATRIX_ROW_PINS_RIGHT { GP29, GP28, GP27, GP26, GP22, NO_PIN }
#define MATRIX_COL_PINS_RIGHT { GP2, GP3, GP4, GP5, GP6, GP7, GP8 }

/* Trackball */
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP18
#define SPI_MISO_PIN GP20
#define SPI_MOSI_PIN GP19
#define PMW33XX_CS_PIN GP10
#define ROTATIONAL_TRANSFORM_ANGLE -25 // Optional: Rotates the trackball
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x06
#define POINTING_DEVICE_DEBUG

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// This LED blinks when entering bootloader