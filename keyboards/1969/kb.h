#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012,       K014, K015,       \
	K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K115,       \
	            K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215,       \
	      K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315,       \
	K400, K401,       K403,             K406,                   K410, K411, K412, K413, K414, K415,       \
	                                                                                                K516  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  KC_NO, K014,  K015,  KC_NO }, \
	{ K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  KC_NO, K115,  KC_NO }, \
	{ KC_NO, KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  KC_NO }, \
	{ KC_NO, K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315,  KC_NO }, \
	{ K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  K412,  K413,  K414,  K415,  KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K516 }  \
}

#endif