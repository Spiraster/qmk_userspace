// Copyright 2023 James Young for QMK (@noroadsleft)
// SPDX-License-Identifier: GPL-2.0-or-later

// 19, 18, 18, 16, 17, 12 = 100

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_96_ansi(
        LT(0,KC_ESC), LT(0,KC_F1), LT(0,KC_F2), LT(0,KC_F3), LT(0,KC_F4), LT(0,KC_F5), LT(0,KC_F6), LT(0,KC_F7), LT(0,KC_F8), LT(0,KC_F9), LT(0,KC_F10),   LT(0,KC_F11), LT(0,KC_F12), KC_PSCR, KC_DEL,  KC_HOME, KC_END,  KC_INS,  KC_PGUP,
        KC_GRV,       KC_1,        KC_2,        KC_3,        KC_4,        KC_5,        KC_6,        KC_7,        KC_8,        KC_9,        KC_0,           KC_MINS,      KC_EQL,                KC_BSPC, KC_PSLS, KC_PAST, KC_PMNS, KC_PGDN,
        KC_TAB,       KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,        KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,           KC_LBRC,      KC_RBRC,               KC_BSLS, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_CAPS,      KC_A,        KC_S,        KC_D,        KC_F,        KC_G,        KC_H,        KC_J,        KC_K,        KC_L,        KC_SCLN,        KC_QUOT,                             KC_ENT,  KC_P4,   KC_P5,   KC_P6,
        KC_LSFT,                   KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,        KC_N,        KC_M,        KC_COMM,     KC_DOT,         KC_SLSH,                    KC_RSFT, KC_UP,   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_LCTL,      KC_LGUI,     KC_LALT,                                            KC_SPC,                                             RALT_T(KC_APP), MO(1),        KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT
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
    if (record->event.pressed && !record->tap.count) {
        switch (keycode) {
            case LT(0,KC_ESC):
                tap_code16(A(KC_F4));
                return false;
            case LT(0,KC_F1):
                tap_code16(KC_F13);
                return false;
            case LT(0,KC_F2):
                tap_code16(KC_F14);
                return false;
            case LT(0,KC_F3):
                tap_code16(KC_F15);
                return false;
            case LT(0,KC_F4):
                tap_code16(KC_F16);
                return false;
            case LT(0,KC_F5):
                tap_code16(KC_F17);
                return false;
            case LT(0,KC_F6):
                tap_code16(KC_F18);
                return false;
            case LT(0,KC_F7):
                tap_code16(KC_F19);
                return false;
            case LT(0,KC_F8):
                tap_code16(KC_F20);
                return false;
            case LT(0,KC_F9):
                tap_code16(KC_F21);
                return false;
            case LT(0,KC_F10):
                tap_code16(KC_F22);
                return false;
            case LT(0,KC_F11):
                tap_code16(KC_F23);
                return false;
            case LT(0,KC_F12):
                tap_code16(KC_F24);
                return false;
        }
    }
	return true;
};
