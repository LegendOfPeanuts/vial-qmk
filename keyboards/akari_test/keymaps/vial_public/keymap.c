#include "akari_test.h"
#include QMK_KEYBOARD_H

enum layer_names {
    _GROUND
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_GROUND] = LAYOUT(
        KC_Q
        )

};