#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002,       K004, K005, K006,       K008, K009, K010, K011,                   \
	K100, K101, K102,       K104, K105, K106, K107, K108, K109, K110, K111,                   \
	K200, K201, K202,       K204, K205, K206, K207, K208, K209, K210, K211,                   \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,                   \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,                   \
	K500, K501, K502, K503, K504, K505, K506,       K508, K509, K510, K511,       K513,       \
	K600, K601, K602, K603, K604, K605, K606, K607, K608,       K610, K611,                   \
	      K701,                               K707, K708,             K711,                   \
	                                                                        K812, K813  \
) { \
	{ K000,  K001,  K002,  KC_NO, K004,  K005,  K006,  KC_NO, K008,  K009,  K010,  K011,  KC_NO, KC_NO, KC_NO }, \
	{ K100,  K101,  K102,  KC_NO, K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  KC_NO, KC_NO, KC_NO }, \
	{ K200,  K201,  K202,  KC_NO, K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  KC_NO, KC_NO, KC_NO }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, KC_NO, KC_NO }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  KC_NO, KC_NO, KC_NO }, \
	{ K500,  K501,  K502,  K503,  K504,  K505,  K506,  KC_NO, K508,  K509,  K510,  K511,  KC_NO, K513,  KC_NO }, \
	{ K600,  K601,  K602,  K603,  K604,  K605,  K606,  K607,  K608,  KC_NO, K610,  K611,  KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, K701,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K707,  K708,  KC_NO, KC_NO, K711,  KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K812,  K813,  KC_NO }  \
}

#endif