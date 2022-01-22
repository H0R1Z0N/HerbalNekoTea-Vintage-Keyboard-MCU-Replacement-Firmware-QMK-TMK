#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	      K001,       \
	      K011,       \
	      K021, K022, \
	K030,       K032, \
	            K042, \
	            K052, \
	            K062, \
	            K072, \
	            K082, \
	      K091, K092, \
	      K101,       \
	      K111,       \
	      K121,       \
	      K131, K132  \
) { \
	{ KC_NO, K001,  KC_NO }, \
	{ KC_NO, K011,  KC_NO }, \
	{ KC_NO, K021,  K022 }, \
	{ K030,  KC_NO, K032 }, \
	{ KC_NO, KC_NO, K042 }, \
	{ KC_NO, KC_NO, K052 }, \
	{ KC_NO, KC_NO, K062 }, \
	{ KC_NO, KC_NO, K072 }, \
	{ KC_NO, KC_NO, K082 }, \
	{ KC_NO, K091,  K092 }, \
	{ KC_NO, K101,  KC_NO }, \
	{ KC_NO, K111,  KC_NO }, \
	{ KC_NO, K121,  KC_NO }, \
	{ KC_NO, K131,  K132 }  \
}

#endif