#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, \
	K010, K011, K012, K013, K014, K015,       K017, \
	                                    K026,       \
	K030,                                           \
	K040, K041, K042, K043, K044, K045, K046, K047, \
	      K051, K052, K053, K054,       K056, K057, \
	                              K065,             \
	K070, K071, K072, K073, K074, K075, K076, K077, \
	K080, K081, K082, K083, K084, K085, K086, K087, \
	K090, K091, K092, K093, K094, K095, K096, K097, \
	K100, K101, K102, K103, K104, K105, K106, K107, \
	K110, K111, K112, K113, K114, K115, K116, K117, \
	K120, K121, K122, K123, K124, K125, K126, K127, \
	K130, K131, K132,       K134, K135, K136, K137, \
	                  K143,                         \
	                                          K157, \
	      K161, K162,       K164, K165, K166,       \
	      K171,                                     \
	K180,       K182, K183, K184, K185, K186, K187  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007 }, \
	{ K010, K011,  K012,  K013,  K014,  K015,  KC_NO, K017 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K026,  KC_NO }, \
	{ K030,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K040,  K041,  K042,  K043,  K044,  K045,  K046,  K047 }, \
	{ KC_NO, K051,  K052,  K053,  K054,  KC_NO, K056,  K057 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K065,  KC_NO, KC_NO }, \
	{ K070,  K071,  K072,  K073,  K074,  K075,  K076,  K077 }, \
	{ K080,  K081,  K082,  K083,  K084,  K085,  K086,  K087 }, \
	{ K090,  K091,  K092,  K093,  K094,  K095,  K096,  K097 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107 }, \
	{ K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117 }, \
	{ K120,  K121,  K122,  K123,  K124,  K125,  K126,  K127 }, \
	{ K130,  K131,  K132,  KC_NO, K134,  K135,  K136,  K137 }, \
	{ KC_NO, KC_NO, KC_NO, K143,  KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K157 }, \
	{ KC_NO, K161,  K162,  KC_NO, K164,  K165,  K166,  KC_NO }, \
	{ KC_NO, K171,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K180,  KC_NO, K182,  K183,  K184,  K185,  K186,  K187 }  \
}

#endif
