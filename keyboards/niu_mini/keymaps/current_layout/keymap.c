#include QMK_KEYBOARD_H
// this is the new layout!
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0
     * ,-----------------------------------------------------------------------------------.
     * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Enter |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Ctrl |  GUI | Caps |  Alt |Layer1|    Space    |Layer2|  /   | Left | Down |Right |
     * `-----------------------------------------------------------------------------------'
     */
    [0] = LAYOUT_planck_mit(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
        KC_LCTL, KC_LGUI, KC_CAPS, KC_LALT, MO(1),     KC_SPC,     MO(2), KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Layer 1
     * ,-----------------------------------------------------------------------------------.
     * |   `  |      | prev | play | next |   (  |   )  |      |      |      |      |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      | mute | Vol- | Vol+ |   [  |   ]  |   -  |   +  |      |      |   \  |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      |      |      |      |   {  |   }  |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Reset|      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [1] = LAYOUT_planck_mit(
        KC_GRV,  _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_LPRN, KC_RPRN, _______, _______, _______, _______, _______,
        _______, _______, KC_MUTE, KC_VOLU, KC_VOLD, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL,  _______, _______, KC_BSLS,
        _______, _______, _______, _______, _______, KC_LCBR, KC_RCBR, _______, _______, _______, _______, _______,
        RESET,   _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
    ),

    /* Layer 2 (r_ Indicates RGB Controls)
     * ,-----------------------------------------------------------------------------------.
     * |r_TOG |r_Mode|  f7  |  f8  |  f9  |  f10 |      |   7  |   8  |  9   |      |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |r_Hue+|r_Hue-|  f4  |  f5  |  f6  |  f11 |      |   4  |   5  |  6   |      |      |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |r_Sat+|r_Sat-|  f1  |  f2  |  f3  |  f12 |      |   1  |   2  |  3   |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |   0  |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [2] = LAYOUT_planck_mit(
        RGB_TOG, RGB_MOD, KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, KC_7,    KC_8,    KC_9,    _______,_______,
        RGB_HUI, RGB_HUD, KC_F4,   KC_F5,   KC_F6,   KC_F11,  _______, KC_4,    KC_5,    KC_6,    _______, _______, 
        RGB_SAI, RGB_SAD, KC_F1,   KC_F2,   KC_F3,   KC_F12,  _______, KC_1,    KC_2,    KC_3,    _______,_______,
        _______, _______, _______, _______, _______,     _______,      _______, KC_0,    _______, _______, _______
    )
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void led_set_user(uint8_t usb_led) {

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_KANA)) {

    } else {

    }

}
