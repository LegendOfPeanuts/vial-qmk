#include "akari.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
  //Key Matrix to LED Index
  {NO_LED,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10,  11,  12,  NO_LED,  13},
  {29,     28, 27, 26, 25, 24, 23, 22, 21, 20, 19,  18,  17,  16,  15,      14},
  {30,     31, 32, 33, 34, 35, 36, 37, 38, 39, 40,  41,  42,  43,  44,      45},
  {60,     59, 58, 57, 56, 55, 54, 53, 52, 51, 50,  49,  48,  47,  NO_LED,  46},
  {61,     62, 63, 64, 65, 66, 67, 68, 69, 70, 71,  72,  73,NO_LED,74,  75},
  {88,     87, 86, 85, NO_LED, 84, 83, 82, 81, NO_LED, 80,  79,  78,  77,  NO_LED,  76}
}, { 
  //LED Index to Physical Positon
  { 22,  5},   { 36,  4},  { 48,  4},  { 62,  6}, { 70,  8},  { 87,  10},  { 98,  12},  { 115,  12},  { 127,  10},  { 141,  8},  { 152,  6},  { 165,  4},  { 176,  4},  { 209,  4},
  { 196,  14},  { 185,  16},  { 172,  16},  { 161,  16},  { 150,  15},  { 138,  17},  { 127,  19},  { 115,  21},  { 98,  23},  { 86,  23},  { 75,  21},  { 64,  19},  { 51,  17},  { 40,  15},  { 28,  16},  { 7,  16},  
  { 7,  24},  { 29,  24},  { 43,  24},  { 55,  24},  { 67,  26},  { 78,  29},  { 89,  30},  { 113,  32},  { 123,  30},  { 136,  29},  { 147,  27},  { 158,  25},  { 171,  24},  { 181,  24},  { 196,  24},  { 212,  22}, 
  { 214,  31},  { 195,  33},  { 176,  33},  { 165,  33},  { 151,  35},  { 140,  36},  { 129,  38},/**/  { 108,  48}/**/,  { 90,  39},  { 79,  37},  { 68,  35},  { 56,  33},  { 44,  33},  { 26,  33},  { 7,  33}, 
  { 7,  42},  { 28,  42},  { 47,  42},  { 60,  43},  { 71,  45},  { 82,  46},  { 94,  48},  { 118,  40},  { 134,  46},  { 146,  44},  { 157,  42},  { 171,  42},  { 185,  42},  { 205,  42},  { 216,  31}, 
  { 216,  52},  { 206,  54},  { 193,  54},  { 174,  54},  { 153,  54},  { 127,  55},  /**/{ 123,  48}/**/,  { 97,  57},  { 80,  54},  { 60,  52},  { 41,  50},  { 23,50},  { 7,  50}
}, {
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4
} };
#endif

enum keyboard_layers {
    _GROUND,
    _ONE,
    _TWO,
    _THREE,
    _FOUR,
    _FIVE,
    _SIX,
    _SEVEN,
    _EIGHT
};


