// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(BLACKHOLE)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static HSV BLACKHOLE_math(HSV hsv, uint8_t i, uint8_t time) {
    uint8_t huedelta = 50;
    hsv.h            = hsv.h + scale8(abs8(g_led_config.point[i].x - time), huedelta);
    return hsv;
}
// e.g: A simple effect, self-contained within a single method
static bool BLACKHOLE(effect_params_t* params) {
    return effect_runner_i(params, &BLACKHOLE_math);
}


#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
