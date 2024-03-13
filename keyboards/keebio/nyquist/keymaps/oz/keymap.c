#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// QWERTY layer
[0] = LAYOUT_ortho_5x12(
KC_GRV,          KC_1,          KC_2,          KC_3,          KC_4,          KC_5,            KC_6,            KC_7,          KC_8,          KC_9,          KC_0,             KC_BSLS,
KC_TAB,          KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,            KC_Y,            KC_U,          KC_I,          KC_O,          KC_P,             KC_BSPC,
LCTL_T(KC_ESC),  LGUI_T(KC_A),  LALT_T(KC_S),  LCTL_T(KC_D),  LSFT_T(KC_F),  KC_G,            KC_H,            LSFT_T(KC_J),  LCTL_T(KC_K),  RALT_T(KC_L),  RGUI_T(KC_SCLN),  KC_QUOT,
KC_LSFT,         KC_Z,          KC_X,          KC_C,          KC_V,          KC_B,            KC_N,            KC_M,          KC_COMM,       KC_DOT,        KC_SLSH,          SC_SENT,
KC_LCTL,         KC_RALT,       KC_LALT,       KC_LGUI,       MO(2),         LALT_T(KC_SPC),  RGUI_T(KC_SPC),  MO(3),         KC_LEFT,       KC_DOWN,       KC_UP,            KC_RGHT
),

// Colemak
[1] = LAYOUT_ortho_5x12(
  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
  KC_TRNS,  KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_TRNS,
  KC_TRNS,  KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     KC_TRNS,
  KC_TRNS,  KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,     KC_K,     KC_H,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(2),    KC_TRNS,  KC_TRNS,  MO(3),    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
),

// Symbols
[2] = LAYOUT_ortho_5x12(
  KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_BSPC,
  KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_DEL,
  KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_BSPC,  KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,
  KC_TRNS,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_TRNS,  KC_TRNS,  KC_MPRV,  KC_STOP,  KC_MPLY,  KC_MNXT,
  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_ENT,   MO(4),    KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END
),

// Symbols
[3] = LAYOUT_ortho_5x12(
  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,    KC_5,    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSPC,
  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,    KC_5,    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
  KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6,    KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,
  KC_TRNS,  KC_F7,    KC_F8,    KC_F9,    KC_F10,  KC_F11,  KC_F12,   KC_TRNS,  KC_TRNS,  KC_MUTE,  KC_VOLD,  KC_VOLU,
  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(4),   KC_ENT,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END
),

// Keyboard settings
[4] = LAYOUT_ortho_5x12(
  KC_PWR,   DF(1),    KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,  DF(0),    KC_TRNS,
  KC_TRNS,  QK_BOOT,  RGB_TOG,  RGB_MOD,   RGB_HUI,  RGB_VAI,  RGB_SAI,  KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
  KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_RMOD,  RGB_HUD,  RGB_VAD,  RGB_SAD,  KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   RGB_M_P,  RGB_M_B,  KC_TRNS,  QK_MACRO_0,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
),

// Unused yet.
[5] = LAYOUT_ortho_5x12(
  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
  KC_NO,  KC_NO,  KC_NO,  KC_NO,  MO(2),  KC_NO,  KC_NO,  MO(3),  KC_NO,  KC_NO,  KC_NO,  KC_NO
)

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case QK_MACRO_0:
                SEND_STRING("Good morning! :wave::sunrise_over_mountains::coffee:");
                return false;
        }
    }

    return true;
};
