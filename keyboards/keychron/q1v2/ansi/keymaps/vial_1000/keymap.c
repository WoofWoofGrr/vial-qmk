/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers{
    GAMING_BASE,
    GAMING_FN,
    TYPING_BASE,
    TYPING_FN
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [GAMING_BASE] = LAYOUT_ansi_82(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,             KC_PAUSE,
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RCMD,  MO(TYPING_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [GAMING_FN] = LAYOUT_ansi_82(
        _______,  _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,     _______,   _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______),

    [TYPING_BASE] = LAYOUT_ansi_82(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,             KC_PAUSE,
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_RCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_HOME,
        SC_LSPO,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              SC_RSPC,  KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                LT(3,KC_SPC),                                 KC_RALT,  KC_APP, KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [TYPING_FN] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  KC_MPLY,  KC_MPRV,  KC_MNXT,  KC_MUTE,  _______,  _______,  _______,  _______,   RGB_SAD,            RGB_SAI,
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,  KC_F9,    KC_F10,   KC_F11,     KC_F12,    KC_DEL,             RGB_TOG,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_PGUP,  _______,  KC_UP,  _______,  _______,  _______,    _______,   KC_INS,             RGB_HUI,
        _______,  _______, _______,  _______,  _______,  _______,  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RIGHT,  _______,  _______,             _______,            RGB_HUD,
        _______,            _______,  _______,  KC_CAPS,  _______,  _______,  KC_HOME,  KC_END,  _______,  _______,  _______,              _______,  RGB_VAI,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  RGB_RMOD,  RGB_VAD,  RGB_MOD),
};

// int hue;
// void matrix_scan_user(void) {

//     if (get_highest_layer(layer_state | default_layer_state) > 1)
//     {
//         return;
//     }
//   for (int i = 1; i < 13; i++) {
//     rgblight_sethsv_at(hue++ + i * 30, 255, 255, i); // Set the color for each key in the F key row
//   }
// }

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max)
{
    const int endRowIndices[] =
    {
        14, 29, 44, 58,
    };

    const int led_index = 14;
    const int led2index = 29;

    rgb_matrix_set_color(led_index, RGB_OFF);
    rgb_matrix_set_color(led2index, RGB_OFF);
    
    rgb_matrix_set_color(endRowIndices[0], RGB_OFF);
    rgb_matrix_set_color(endRowIndices[1], RGB_OFF);
    rgb_matrix_set_color(endRowIndices[2], RGB_OFF);
    rgb_matrix_set_color(endRowIndices[3], RGB_OFF);

    switch (get_highest_layer(layer_state | default_layer_state))
    {
        case GAMING_BASE:
            rgb_matrix_set_color(endRowIndices[0], RGB_WHITE);
            rgb_matrix_set_color(endRowIndices[1], RGB_WHITE);
            rgb_matrix_set_color(endRowIndices[2], RGB_WHITE);
            rgb_matrix_set_color(endRowIndices[3], RGB_WHITE);
            break;
        case GAMING_FN:
            rgb_matrix_set_color(led_index, RGB_RED);
            break;
        case TYPING_BASE:
            break;
        case TYPING_FN:
            rgb_matrix_set_color(led_index, 30, 30, 30);
            break;
    }

    if (host_keyboard_led_state().caps_lock) 
    {
        rgb_matrix_set_color(led_index, RGB_RED);
    }
    return true;
}
