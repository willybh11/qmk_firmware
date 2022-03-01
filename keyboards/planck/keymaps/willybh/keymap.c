#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(
    KC_NO, KC_Q,  KC_W,  KC_E,    KC_R,  KC_T,   KC_Y,            KC_U,  KC_I,    KC_O,   KC_P,   KC_NO, 
    KC_NO, KC_A,  KC_S,  KC_D,    KC_F,  KC_G,   KC_H,            KC_J,  KC_K,    KC_L,   KC_ENT, KC_NO, 
    KC_NO, KC_Z,  KC_X,  KC_C,    KC_V,  KC_B,   KC_N,            KC_M,  KC_COMM, KC_DOT, KC_TAB, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_LALT, MO(1), KC_SPC, LSFT_T(KC_BSPC), MO(2), KC_LCTL, KC_NO,  KC_NO,  KC_NO),

[_LAYER1] = LAYOUT(
    KC_NO, KC_NO,   KC_VOLD, KC_UP,   KC_VOLU, KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_ESC,  KC_NO, 
    KC_NO, KC_LGUI, KC_LEFT, KC_DOWN, KC_RGHT, KC_LPRN, KC_RPRN, KC_MINS, KC_EQL, KC_QUOT, KC_SCLN, KC_NO, 
    KC_NO, KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT, KC_LBRC, KC_RBRC, KC_NO,   KC_NO,  KC_NO,   KC_SLSH, KC_NO, 
    KC_NO, KC_TRNS, KC_NO,   KC_TRNS, KC_NO,   KC_TRNS, KC_DEL,  KC_NO,   KC_NO,  KC_NO,   KC_TRNS, KC_NO),

[_LAYER2] = LAYOUT(
    KC_NO, RESET,  KC_F7,  KC_F8,   KC_F9, KC_F10,  KC_NO,   KC_7,  KC_8, KC_9,  KC_NO,   KC_NO, 
    KC_NO, KC_NO,  KC_F4,  KC_F5,   KC_F6, KC_F11,  KC_NO,   KC_4,  KC_5, KC_6,  KC_LSFT, KC_NO, 
    KC_NO, KC_NO,  KC_F1,  KC_F2,   KC_F3, KC_F12,  KC_NO,   KC_1,  KC_2, KC_3,  KC_BSLS, KC_NO, 
    KC_NO, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_0, KC_NO, KC_NO,   KC_NO) 

};
