#include QMK_KEYBOARD_H

#define KC_HESC LT(0, KC_ESC)
#define KC_HF1  LT(0, KC_F1)
#define KC_HF2  LT(0, KC_F2)
#define KC_HF3  LT(0, KC_F3)
#define KC_HF4  LT(0, KC_F4)
#define KC_HF5  LT(0, KC_F5)
#define KC_HF6  LT(0, KC_F6)
#define KC_HF7  LT(0, KC_F7)
#define KC_HF8  LT(0, KC_F8)
#define KC_HF9  LT(0, KC_F9)
#define KC_HF10 LT(0, KC_F10)
#define KC_HF11 LT(0, KC_F11)
#define KC_HF12 LT(0, KC_F12)
#define KC_HALT RALT_T(KC_APP)

// 19, 18, 18, 16, 17, 12 = 100
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_96_ansi(
        KC_HESC, KC_HF1,  KC_HF2,  KC_HF3,  KC_HF4,  KC_HF5,  KC_HF6,  KC_HF7,  KC_HF8,  KC_HF9,  KC_HF10, KC_HF11, KC_HF12, KC_PSCR, KC_DEL,  KC_HOME, KC_END,  KC_INS,  KC_PGUP,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC, KC_PSLS, KC_PAST, KC_PMNS, KC_PGDN,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,  KC_P4,   KC_P5,   KC_P6,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_HALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT
    ),
	[1] = LAYOUT_96_ansi(
        _______, KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE, KC_CALC,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_MS_U, _______, KC_BTN2,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, KC_MS_L, KC_BTN1, KC_MS_R,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, KC_MS_D, _______, _______,
        _______, _______, _______,                            _______,                            MO(2),   _______, _______, _______, _______, _______, _______, KC_NUM
    ),
	[2] = LAYOUT_96_ansi(
        KC_SLEP, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, XXXXXXX,
        XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_TOG, RGB_RMOD, RGB_MOD, RGB_M_P, RGB_M_R, RGB_M_B, RGB_M_SW, RGB_M_G, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, RGB_HUD,  RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI,  RGB_SPD, RGB_SPI, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,  XXXXXXX,                            XXXXXXX,                             _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->tap.count && record->event.pressed) {
        switch (keycode) {
            case KC_HESC:
                tap_code16(A(KC_F4));
                return false;
            case KC_HF1:
                tap_code(KC_F13);
                return false;
            case KC_HF2:
                tap_code(KC_F14);
                return false;
            case KC_HF3:
                tap_code(KC_F15);
                return false;
            case KC_HF4:
                tap_code(KC_F16);
                return false;
            case KC_HF5:
                tap_code(KC_F17);
                return false;
            case KC_HF6:
                tap_code(KC_F18);
                return false;
            case KC_HF7:
                tap_code(KC_F19);
                return false;
            case KC_HF8:
                tap_code(KC_F20);
                return false;
            case KC_HF9:
                tap_code(KC_F21);
                return false;
            case KC_HF10:
                tap_code(KC_F22);
                return false;
            case KC_HF11:
                tap_code(KC_F23);
                return false;
            case KC_HF12:
                tap_code(KC_F24);
                return false;
        }
    }
	return true;
};
