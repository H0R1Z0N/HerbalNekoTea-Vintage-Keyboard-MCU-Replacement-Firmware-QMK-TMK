//Rebase of the Panasonic Business Partner 286 code from KBFirmware output 
//to up to date QMK by HerbalNekoTea, free to use by anybody else.
//Enjoy your keyboard now fully USB compliant.
//To use with Teensy 2.0++ (or modify for the controller you wanna use)

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6969
#define DEVICE_VER      0x0018
#define MANUFACTURER    "DBoard"
#define PRODUCT         "DBoard Keyboard"
#define DESCRIPTION     "DBoard Keyboard MCU Replacement Firmware by HerbalNekoTea"

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

/* key matrix pins */
//First test (totally shit)
//#define MATRIX_ROW_PINS { B9, B8, B7, B6, B5, B4, B3, A15, B10, B1, B0, B12 }
//#define MATRIX_COL_PINS { C15, C14, A1, A2, C13, A7, A5, A6 }
//Shifted 180° (connector toward the right side of the back of the pcb)
//#define MATRIX_ROW_PINS { B10, A2, B1, B0, A7, A6, A5, A3, B9, B8, B7, B6 }
//#define MATRIX_COL_PINS { A8, B15, B14, B13, B6, A15, B3, B4 }
//Col pins 3 being shifted a lot only, for row 0 to 2 shifted, row 8 to 10
//#define MATRIX_ROW_PINS { A15, B3, B4, B9, B8, B7, B6, B5, A7, A6, B1, B10 }
//#define MATRIX_COL_PINS { C13, C14, C15, A5, A0, A1, A2, A3 }
// Issue on Row 3, 4, 5 and 6 being unusable pins too
//#define MATRIX_ROW_PINS { B14, B15, A8, ##, ##, ##, ##, A15, ##, ##, ##, C13 }
// Issue on Col 1 due to B2 beign Boot1, move it, A4 are a shared reserved pin, sadly, move it
//#define MATRIX_COL_PINS { B10, ##, B1, B0, A7, A6. A5, ##}
//No rewire on Column, Row 0/1 are limited and won't work, Row 2's reset, Row 7 reserved, Row 8 to 11 over outside the pcb
//#define MATRIX_ROW_PINS { A7, A6, A5, A0, A1, A2, A3, B0, A8, B15, B14, B13 }
//#define MATRIX_COL_PINS { B9, B8, B7, B6, B5, B4, B3, A15 }
//Switching to Teensy 2.0
//#define MATRIX_ROW_PINS { C7, C6, D3, D2, D1, D0, B7, B3, F0, F1, B0, B1 }
//#define MATRIX_COL_PINS { D7, B4, B5, B6, F7, F6, F5, F4 }
//On the flip side... fuck
#define MATRIX_ROW_PINS { D7, B4, B5, B6, F7, F6, F5, F4, F0, F1, E6, B0 }
#define MATRIX_COL_PINS { D3, D2, D1, D0, B7, B3, B2, B1 }


#define UNUSED_PINS



/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
//#define DEBOUNCE 5

/* Set 0 if debouncing isn't needed */
//#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LFNUM or KC_LSCR instead in keymap */
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
//#define GRAVE_ESC_CTRL_OVERRIDE

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
