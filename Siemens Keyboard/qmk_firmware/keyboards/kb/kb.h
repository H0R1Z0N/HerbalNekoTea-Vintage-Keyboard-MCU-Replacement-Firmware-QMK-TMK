#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K0000, K0001, K0002, K0003, K0004, K0005,                             \
	K0100, K0101, K0102, K0103, K0104, K0105, K0106,                      \
	K0200, K0201, K0202, K0203, K0204, K0205, K0206,                      \
	K0300, K0301, K0302, K0303, K0304, K0305, K0306, K0307,               \
	K0400, K0401, K0402, K0403, K0404, K0405, K0406, K0407,               \
	K0500, K0501, K0502, K0503, K0504, K0505, K0506, K0507,               \
	K0600, K0601, K0602, K0603, K0604, K0605, K0606, K0607,               \
	K0700, K0701, K0702, K0703, K0704, K0705, K0706, K0707,               \
	K0800, K0801, K0802, K0803, K0804, K0805, K0806, K0807,        K0809, \
	                                                               K0909, \
	                                                               K1009, \
	                                                               K1109  \
) { \
	{ K0000, K0001, K0002, K0003, K0004, K0005, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K0100, K0101, K0102, K0103, K0104, K0105, K0106, KC_NO, KC_NO, KC_NO }, \
	{ K0200, K0201, K0202, K0203, K0204, K0205, K0206, KC_NO, KC_NO, KC_NO }, \
	{ K0300, K0301, K0302, K0303, K0304, K0305, K0306, K0307, KC_NO, KC_NO }, \
	{ K0400, K0401, K0402, K0403, K0404, K0405, K0406, K0407, KC_NO, KC_NO }, \
	{ K0500, K0501, K0502, K0503, K0504, K0505, K0506, K0507, KC_NO, KC_NO }, \
	{ K0600, K0601, K0602, K0603, K0604, K0605, K0606, K0607, KC_NO, KC_NO }, \
	{ K0700, K0701, K0702, K0703, K0704, K0705, K0706, K0707, KC_NO, KC_NO }, \
	{ K0800, K0801, K0802, K0803, K0804, K0805, K0806, K0807, KC_NO, K0809 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K0909 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K1009 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K1109 }  \
}

#endif
