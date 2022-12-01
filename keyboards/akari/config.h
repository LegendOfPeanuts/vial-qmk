#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x696B // 9e
#define PRODUCT_ID      0x0069 // 
#define DEVICE_VER      0x0001
#define MANUFACTURER    LegendOfPeanuts
#define PRODUCT         Akari
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_ROW_PINS { C0, C1, D2, D3, D5, F7 }
#define MATRIX_COL_PINS { F0, F1, E6, C7, F6, B6, D4, B1, B0, B7, B5, B4, D7, D6, B3, B2 }
#define UNUSED_PINS { A4, A5, A6, A7, C2, C3, C4, C5, E0, E1, E3, E4, E5, E7 , F2, F3, F4, F5 }

/* encoder pins */
#define ENCODERS_PAD_A { A0, A3 }
#define ENCODERS_PAD_B { A1, A2 }
#define ENCODER_RESOLUTIONS { 4, 4 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define DYNAMIC_KEYMAP_LAYER_COUNT 7
/* OLED Driver */

#define RGB_DI_PIN C6
#ifdef RGB_DI_PIN
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_CENTER { 102, 36 }


#define RGBLED_NUM 91
#define DRIVER_LED_TOTAL 91
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 180
#endif

#define RGB_DISABLE_WHEN_USB_SUSPENDED

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
