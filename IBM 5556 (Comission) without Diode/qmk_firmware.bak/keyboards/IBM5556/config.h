//Rebase of the Panasonic Business Partner 286 code from KBFirmware output 
//to up to date QMK by HerbalNekoTea, free to use by anybody else.
//Enjoy your keyboard now fully USB compliant.
//To use with Teensy 2.0++ (or modify for the controller you wanna use)

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6969
#define DEVICE_VER      0x0006
#define MANUFACTURER    "IBM"
#define PRODUCT         "IBM 5556 Keyboard"
#define DESCRIPTION     "IBM 5556 Keyboard MCU Replacement Firmware by HerbalNekoTea"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_ROW_PINS { C6, C5, C4, C3, C2, C1, C0, E1 }
#define MATRIX_COL_PINS { F7, F6, F5, F4, F3, F2, F1, F0, E6, E7, B0, B1, B2, B3, B4, B5 }

#define AUDIO_PIN B7
#define AUDIO_CLICKY
#define AUDIO_CLICKY_FREQ_DEFAULT 440.0f
#define AUDIO_CLICKY_FREQ_RANDOMNESS 0.00f
#define AUDIO_CLICKY_DELAY_DURATION 0.5

#define UNUSED_PINS


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
//#define DEBOUNCE 5

/* Set 0 if debouncing isn't needed */
//#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is userful for the Windows task manager shortcut (ctrl+shift+esc).
 */
#define GRAVE_ESC_CTRL_OVERRIDE

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */

#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
