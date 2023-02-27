#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_all(
		KC_ESC, KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, 
		KC_F7, KC_F8, KC_F9, KC_F10, KC_GRV, KC_1, KC_2, KC_3, 
		KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
		KC_EQL, KC_BSLS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, 
		KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_A, 
		KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, 
		KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, 
		KC_COMM, KC_DOT, KC_SLSH, KC_APP, KC_BSPC, KC_TAB, KC_ENT, KC_LCTL, 
		KC_QUOT, KC_BSLS, KC_LSFT, KC_RSFT, KC_LCTL, KC_LGUI, KC_LALT, MO(1), 
		KC_SPC, KC_BSPC, MO(1), KC_RALT, KC_RCTL, KC_LSFT, KC_TAB, KC_PGUP, 
		KC_PGDN, KC_HOME, KC_END, KC_INS, KC_DEL, 
		KC_UP, KC_LEFT, KC_RGHT, KC_DOWN),

[1] = LAYOUT_all(
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_CAPS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};

/*
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
*/
