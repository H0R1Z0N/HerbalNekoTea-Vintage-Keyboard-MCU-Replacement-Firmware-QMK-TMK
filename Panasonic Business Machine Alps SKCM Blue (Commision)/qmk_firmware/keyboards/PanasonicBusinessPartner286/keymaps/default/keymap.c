#include QMK_KEYBOARD_H

#define _____ KC_TRNS
#define XXXXX KC_NO
#define _L0 0
#define _L1 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_L0] = LAYOUT_all(
		KC_F5, KC_F9, KC_X, KC_V, KC_N, KC_SPC, KC_COMM, KC_DOT, KC_RSFT, KC_CAPS, KC_P0, KC_PMNS, KC_P9, KC_PSCR, KC_PPLS, KC_PDOT, 
		KC_F3, KC_F10, KC_Z, KC_C, KC_B, KC_M, KC_L, KC_SLSH, KC_ENT, KC_RBRC, KC_P1, KC_SLCK, KC_P8, KC_P5, KC_PENT, KC_P3, 
		KC_F1, KC_LALT, KC_S, KC_F, KC_H, KC_K, KC_O, KC_SCLN, KC_QUOT, KC_EQL, KC_P2, KC_NLCK, KC_P7, KC_P4, KC_P6, MO(1), 
		KC_F7, KC_LSFT, KC_A, KC_D, KC_G, KC_J, KC_0, KC_P, KC_LBRC, KC_MINS, KC_BSLS, KC_BSPC, 
		KC_F8, KC_LCTL, KC_W, KC_R, KC_Y, KC_I, 
		KC_F6, KC_TAB, KC_Q, KC_E, KC_T, KC_U, KC_INS, KC_HOME, KC_PGUP, KC_DEL, KC_LGUI, KC_LEFT, KC_UP, KC_PGDN, KC_END, 
		KC_F4, KC_1, KC_3, KC_5, KC_7, KC_9, KC_RGHT, KC_DOWN, 
		KC_F2, KC_ESC, KC_2, KC_4, KC_6, KC_8),

[_L1] = LAYOUT_all(
		KC_F15, KC_F19, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_F13, KC_F20, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_F17, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_F18, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_F16, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_F14, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

void matrix_init_user(void) {

  setPinOutput(B5);
  writePinHigh(B5);

  setPinOutput(B6);
  writePinHigh(B6);

  setPinOutput(B4);
  writePinHigh(B4);
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(B5, led_state.num_lock);
        writePin(B6, led_state.caps_lock);
        writePin(B4, led_state.scroll_lock);
    }
    return res;
}
