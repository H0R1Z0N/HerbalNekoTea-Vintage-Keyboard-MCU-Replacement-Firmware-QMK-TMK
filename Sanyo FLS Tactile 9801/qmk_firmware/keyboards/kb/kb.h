#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001,                         K006, K007, K008, K009, K010,       K012, K013, K014, K015, K016, K017, \
	K100, K101, K102,             K105, K106, K107, K108,       K110, K111,             K114, K115,       K117, \
	K200, K201, K202, K203,       K205, K206, K207, K208,       K210, K211,             K214, K215,       K217, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308,       K310, K311,             K314, K315,       K317, \
	K400, K401,                               K407, K408,       K410,                                           \
	K500, K501, K502, K503, K504, K505, K506, K507, K508,       K510, K511,             K514, K515,       K517, \
	            K602, K603, K604, K605, K606,                         K611,             K614, K615,       K617, \
	K700, K701, K702, K703, K704, K705, K706, K707, K708,       K710, K711,             K714, K715,       K717, \
	K800, K801, K802, K803, K804, K805, K806, K807, K808,       K810, K811,             K814, K815,       K817  \
) { \
	{ K000,  K001,  KC_NO, KC_NO, KC_NO, KC_NO, K006,  K007,  K008,  K009,  K010,  KC_NO, K012,  K013,  K014,  K015,  K016,  K017 }, \
	{ K100,  K101,  K102,  KC_NO, KC_NO, K105,  K106,  K107,  K108,  KC_NO, K110,  K111,  KC_NO, KC_NO, K114,  K115,  KC_NO, K117 }, \
	{ K200,  K201,  K202,  K203,  KC_NO, K205,  K206,  K207,  K208,  KC_NO, K210,  K211,  KC_NO, KC_NO, K214,  K215,  KC_NO, K217 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  KC_NO, K310,  K311,  KC_NO, KC_NO, K314,  K315,  KC_NO, K317 }, \
	{ K400,  K401,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K407,  K408,  KC_NO, K410,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K500,  K501,  K502,  K503,  K504,  K505,  K506,  K507,  K508,  KC_NO, K510,  K511,  KC_NO, KC_NO, K514,  K515,  KC_NO, K517 }, \
	{ KC_NO, KC_NO, K602,  K603,  K604,  K605,  K606,  KC_NO, KC_NO, KC_NO, KC_NO, K611,  KC_NO, KC_NO, K614,  K615,  KC_NO, K617 }, \
	{ K700,  K701,  K702,  K703,  K704,  K705,  K706,  K707,  K708,  KC_NO, K710,  K711,  KC_NO, KC_NO, K714,  K715,  KC_NO, K717 }, \
	{ K800,  K801,  K802,  K803,  K804,  K805,  K806,  K807,  K808,  KC_NO, K810,  K811,  KC_NO, KC_NO, K814,  K815,  KC_NO, K817 }  \
}

#endif