
layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);

    switch (layer) {
        case DVORAK:
            rgblight_sethsv_noeeprom_green();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);

            if (PLOVER_MODE) {
                plover_toggle();
                PLOVER_MODE = false;
            }

            break;

        case PLOVER:
            rgblight_sethsv_noeeprom_red();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 3);

            if (!(PLOVER_MODE)) {
                plover_toggle();
                PLOVER_MODE = true;
            }

            break;

        case GAMING:
            rgblight_sethsv_noeeprom_red();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT + 2);

            if (PLOVER_MODE) {
                plover_toggle();
                PLOVER_MODE = false;
            }

            break;

        case ARROWS:
            rgblight_sethsv_noeeprom_blue();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT + 2);

            if (PLOVER_MODE) {
                plover_toggle();
                PLOVER_MODE = false;
            }

            break;

        case MOUSE:
            rgblight_sethsv_noeeprom_blue();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT + 2);

            if (PLOVER_MODE) {
                plover_toggle();
                PLOVER_MODE = false;
            }

            break;

        case NUMPAD:
            rgblight_sethsv_noeeprom_blue();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT + 2);

            if (PLOVER_MODE) {
                plover_toggle();
                PLOVER_MODE = false;
            }

            break;

        case LAYERS:
            rgblight_sethsv_noeeprom_cyan();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT + 2);

            if (PLOVER_MODE) {
                plover_toggle();
                PLOVER_MODE = false;
            }

            break;

        case MEDIA_FN:
            rgblight_sethsv_noeeprom_yellow();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT + 2);

            if (PLOVER_MODE) {
                plover_toggle();
                PLOVER_MODE = false;
            }

            break;

        case CHORD:
            rgblight_sethsv_noeeprom_magenta();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT + 2);

            if (PLOVER_MODE) {
                plover_toggle();
                PLOVER_MODE = false;
            }

            break;

        case FIRMWARE:
            rgblight_sethsv_noeeprom_magenta();
            rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT + 2);

            if (PLOVER_MODE) {
                plover_toggle();
                PLOVER_MODE = false;
            }

            break;

        default:
            break;
    }

    return state;
}
