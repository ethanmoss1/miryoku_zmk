// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#include "miryoku_layers.h"

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)
#define U_STRINGIFY(x) #x
#define U_MACRO(name,...) \
/ {        \
  macros { \
    name: name { \
      compatible = "zmk,behavior-macro"; \
      #binding-cells = <0>; \
      __VA_ARGS__ \
    }; \
  }; \
};

#define U_NP &none // key is not present
#define U_NA &none // present but not available for use
#define U_NU &none // available but not used

#define U_TAPPING_TERM 200

// Clipboard
#define U_RDO &kp K_AGAIN
#define U_PST &kp K_PASTE
#define U_CPY &kp K_COPY
#define U_CUT &kp K_CUT
#define U_UND &kp K_UNDO

// Bootloader key
#define U_BOOT &bootloader

// Mouse keys
#define U_BTN1 &mkp MB1
#define U_BTN2 &mkp MB2
#define U_BTN3 &mkp MB3

#define U_MS_D &kp KP_N2
#define U_MS_L &kp KP_N4
#define U_MS_R &kp KP_N6
#define U_MS_U &kp KP_N8
#define U_WH_D U_NU
#define U_WH_L U_NU
#define U_WH_R U_NU
#define U_WH_U U_NU

// Shift Functions
#define U_RGB_TOG &rgb_ug RGB_TOG
#define U_RGB_EFF &rgb_ug RGB_EFF
#define U_RGB_HUI &rgb_ug RGB_HUI
#define U_RGB_SAI &rgb_ug RGB_SAI
#define U_RGB_BRI &rgb_ug RGB_BRI
#define U_EP_TOG &ext_power EP_TOG

// Behaviours
#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_LT(LAYER, TAP) &u_lt LAYER TAP
