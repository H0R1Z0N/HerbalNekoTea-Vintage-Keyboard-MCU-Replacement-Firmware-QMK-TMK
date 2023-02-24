#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000,             K003, K004,       K006, K007, K008,       K010, K011,                   K015, K016, K017,       K019, K020, K021,       K023, K024, \
	K100,             K103, K104,       K106, K107, K108,       K110, K111,                   K115, K116,             K119, K120, K121,       K123, K124, \
	K200,             K203, K204,       K206, K207, K208,       K210, K211,                   K215, K216, K217,       K219, K220, K221,       K223, K224, \
	K300,             K303, K304,       K306, K307, K308,       K310, K311,                   K315, K316, K317,       K319, K320, K321, K322, K323, K324, \
	      K401, K402,             K405,             K408, K409, K410,       K412, K413, K414,             K417, K418,             K421,             K424, \
	K500,             K503, K504,       K506, K507, K508,       K510, K511,                   K515, K516, K517,       K519,       K521,             K524, \
	K600,             K603, K604,       K606, K607, K608,       K610, K611,                   K615, K616, K617,       K619,       K621,             K624, \
	K700,             K703, K704,       K706, K707, K708,       K710, K711,                   K715, K716, K717,       K719,       K721,             K724  \
) { \
	{ K000,  KC_NO, KC_NO, K003,  K004,  KC_NO, K006,  K007,  K008,  KC_NO, K010,  K011,  KC_NO, KC_NO, KC_NO, K015,  K016,  K017,  KC_NO, K019,  K020,  K021,  KC_NO, K023,  K024 }, \
	{ K100,  KC_NO, KC_NO, K103,  K104,  KC_NO, K106,  K107,  K108,  KC_NO, K110,  K111,  KC_NO, KC_NO, KC_NO, K115,  K116,  KC_NO, KC_NO, K119,  K120,  K121,  KC_NO, K123,  K124 }, \
	{ K200,  KC_NO, KC_NO, K203,  K204,  KC_NO, K206,  K207,  K208,  KC_NO, K210,  K211,  KC_NO, KC_NO, KC_NO, K215,  K216,  K217,  KC_NO, K219,  K220,  K221,  KC_NO, K223,  K224 }, \
	{ K300,  KC_NO, KC_NO, K303,  K304,  KC_NO, K306,  K307,  K308,  KC_NO, K310,  K311,  KC_NO, KC_NO, KC_NO, K315,  K316,  K317,  KC_NO, K319,  K320,  K321,  K322,  K323,  K324 }, \
	{ KC_NO, K401,  K402,  KC_NO, KC_NO, K405,  KC_NO, KC_NO, K408,  K409,  K410,  KC_NO, K412,  K413,  K414,  KC_NO, KC_NO, K417,  K418,  KC_NO, KC_NO, K421,  KC_NO, KC_NO, K424 }, \
	{ K500,  KC_NO, KC_NO, K503,  K504,  KC_NO, K506,  K507,  K508,  KC_NO, K510,  K511,  KC_NO, KC_NO, KC_NO, K515,  K516,  K517,  KC_NO, K519,  KC_NO, K521,  KC_NO, KC_NO, K524 }, \
	{ K600,  KC_NO, KC_NO, K603,  K604,  KC_NO, K606,  K607,  K608,  KC_NO, K610,  K611,  KC_NO, KC_NO, KC_NO, K615,  K616,  K617,  KC_NO, K619,  KC_NO, K621,  KC_NO, KC_NO, K624 }, \
	{ K700,  KC_NO, KC_NO, K703,  K704,  KC_NO, K706,  K707,  K708,  KC_NO, K710,  K711,  KC_NO, KC_NO, KC_NO, K715,  K716,  K717,  KC_NO, K719,  KC_NO, K721,  KC_NO, KC_NO,  K724 }  \
}

#endif
