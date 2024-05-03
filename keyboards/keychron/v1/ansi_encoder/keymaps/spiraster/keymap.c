#include QMK_KEYBOARD_H

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

#define KC_HPSC LT(0, KC_PSCR)

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

// 15, 15, 15, 14, 13, 10 = 82
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ansi_82(
        KC_HESC,  KC_HF1,   KC_HF2,   KC_HF3,   KC_HF4,   KC_HF5,   KC_HF6,   KC_HF7,   KC_HF8,   KC_HF9,   KC_HF10,  KC_HF11,  KC_HF12,            KC_DEL,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,             KC_BSPC,  KC_HOME,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,            KC_BSLS,  KC_END,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                      KC_ENT,   KC_HPSC,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LCMD,  KC_LALT,                                KC_SPC,                                 KC_HALT,  MO(1),    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
    [1] = LAYOUT_ansi_82(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,                      KC_MUTE,  _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            KC_MSTP,  KC_VOLU,
        _______,  KC_HYPR,  _______,                                _______,                                MO(2),    _______,  _______,  KC_MPLY,  KC_VOLD,  KC_MNXT
    ),
    [2] = LAYOUT_ansi_82(
        KC_SLEP,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            KC_PWR,   _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  QK_MAKE,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,            _______,  _______,  _______,  _______,  QK_BOOT,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
    [2] = {}
};
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->tap.count && record->event.pressed) {
        switch (keycode) {
            case KC_HPSC:
                tap_code(KC_INS);
                return false;
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
            case QK_MAKE:
                add_mods(MOD_MASK_CS);
                return true;
        }
    }
	return true;
};