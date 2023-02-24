#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         keyboard
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_ROW_PINS { B2, B3, B4, B5, D3, D2, D1, D0 }
#define MATRIX_COL_PINS { F1, F0, A1, A0, E6, E7, B0, B1, C1, C0, E1, E0, D7, A4, D5, D4 }
//LED are gonna be C2, C3, F2 and GND, you can only direct solder C2/C3
//Direct Solder D3 to D0, C1/C0/E1/E0/D7, avoid D6 (Jumper wire it to A4), D5/D4 being also direct
//Jumper wire The pins above D3 to D0 from B2 to B5 (Don't cross the wire), the one above C1/C0 to F1/F0 (don't cross it)
//Move the bullshit of pins above E1/E0 to A1/A0 by jumper wire (since they cannot align)
//Jumper wire the pins above D7 to E6, the pins above unsused D6 (Which go to A4) to E7, Jumper wire the pins above D5/D4 to to B0/B1
//Jumper wire the LED pins above C2 to A6 and the bottom GND next to it GND on the teensy

//Color code on the hole : Green = Direct, Yellow = Straight Jumper, Red = Bullshit avoiding Jumper
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
