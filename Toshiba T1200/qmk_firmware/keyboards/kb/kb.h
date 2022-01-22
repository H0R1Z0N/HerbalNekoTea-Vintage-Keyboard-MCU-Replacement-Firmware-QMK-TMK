#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003,       K005, K006, K007, K008, \
	K010, K011, K012, K013,       K015, K016, K017, K018, \
	K020, K021, K022, K023,       K025, K026, K027, K028, \
	                                                      \
	K040, K041, K042, K043,       K045, K046, K047, K048, \
	K050, K051, K052, K053,       K055, K056, K057, K058, \
	K060, K061, K062, K063,       K065, K066, K067, K068, \
	K070, K071, K072, K073,       K075, K076, K077, K078, \
	                                                      \
	K090, K091, K092, K093,       K095, K096, K097, K098, \
	K100, K101, K102, K103,       K105, K106, K107, K108, \
	K110, K111, K112, K113,       K115, K116, K117, K118, \
	K120, K121  \
) { \
	{ K000,  K001,  K002,  K003,  KC_NO, K005,  K006,  K007,  K008 }, \
	{ K010,  K011,  K012,  K013,  KC_NO, K015,  K016,  K017,  K018 }, \
	{ K020,  K021,  K022,  K023,  KC_NO, K025,  K026,  K027,  K028 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K040,  K041,  K042,  K043,  KC_NO, K045,  K046,  K047,  K048 }, \
	{ K050,  K051,  K052,  K053,  KC_NO, K055,  K056,  K057,  K058 }, \
	{ K060,  K061,  K062,  K063,  KC_NO, K065,  K066,  K067,  K068 }, \
	{ K070,  K071,  K072,  K073,  KC_NO, K075,  K076,  K077,  K078 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K090,  K091,  K092,  K093,  KC_NO, K095,  K096,  K097,  K098 }, \
	{ K100,  K101,  K102,  K103,  KC_NO, K105,  K106,  K107,  K108 }, \
	{ K110,  K111,  K112,  K113,  KC_NO, K115,  K116,  K117,  K118 }, \
	{ K120,  K121,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}

#endif