#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	LAYOUT(
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, 
		KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT, 
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, 
		KC_LCTL, KC_LGUI, KC_LALT,          MO(1),            KC_SPC,           KC_RCTL, MO(2),   KC_RGUI, KC_RALT
	),
	LAYOUT(
		KC_ESC,  KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_GRV,  KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, KC_DEL, 
		KC_TAB,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_MPLY, KC_MINS, KC_4,    KC_5,    KC_6,    KC_QUOT, KC_INS, 
		KC_LSFT, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPRV, KC_MNXT, KC_EQL,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_RSFT, 
		KC_LCTL, KC_LGUI, KC_LALT,          _______,          KC_0,             KC_RCTL, KC_APP,  KC_RGUI, KC_RALT
	),
	LAYOUT(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, 
		QK_BOOT, KC_CAPS, KC_PSCR, KC_SCRL, KC_PAUS, TG(3),   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,		
		KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, 
		KC_LCTL, KC_LGUI, KC_LALT,          XXXXXXX,          XXXXXXX,          KC_RCTL, _______, KC_RGUI, KC_RALT
	),
	LAYOUT(
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, 
		KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT, 
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, 
		KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,           KC_0,             KC_RCTL, MO(2),   KC_GRV,  KC_ESC
	),
};
