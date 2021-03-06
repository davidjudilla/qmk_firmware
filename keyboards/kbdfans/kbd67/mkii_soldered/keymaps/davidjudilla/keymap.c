/* Copyright 2019 Ryota Goto
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

/* 	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K212, K014, \
 *	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K114, \
 *	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211,       K213,       K214, \
 *	K300, K404, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, \
 *	K400, K401, K402,       K403,       K405,       K407,       K409, K410,       K411, K413, K414  \
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all( /* Base */
	KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  KC_HOME,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS, KC_END,
	KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    LT(3, KC_SCLN), KC_QUOT,          KC_ENT,           KC_PGUP,
	KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN,
	KC_LCTL, KC_LALT, KC_LGUI,          KC_SPC,           KC_SPC,           KC_SPC,           KC_RALT, MO(1),          KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [1] = LAYOUT_all( /* FN */
	RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_GRV,  _______, BL_INC,
	KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, BL_DEC,
	TG(2), KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
	_______, _______, KC_SLCK, KC_PAUS, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_PGUP, _______,
	_______, _______, _______,          _______,          _______,          _______,          _______, _______,          KC_HOME, KC_PGDN, KC_END
  ),
	[2] = LAYOUT_all( /* Game */
	KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  KC_HOME,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS, KC_END,
	KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGUP,
	KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN,
	KC_LCTL, KC_LALT, KC_LCTL,          KC_SPC,           KC_SPC,           KC_SPC,           KC_RALT, TO(0),          KC_LEFT, KC_DOWN, KC_RGHT
  ),
	[3] = LAYOUT_all( /* NAV */
	_______, _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______, _______,  _______, _______,  _______,
	_______,  _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_UP,    _______,    _______,    _______, _______,          _______, _______,
	_______,   _______,    _______,    _______,    _______,    _______,    _______,    KC_LEFT,    KC_DOWN,    KC_RGHT,    _______, _______,          _______,           KC_PGUP,
	_______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______, _______,  _______, _______,          _______,   _______,
	_______, _______, _______,          _______,           _______,           _______,           _______, MO(1),          _______, _______, _______
  ),
};
