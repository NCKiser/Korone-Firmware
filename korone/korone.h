#ifndef QAZPAD_H
#define QAZPAD_H

#include "quantum.h"

#define LAYOUT( \
      k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B,    k0C, k0D, k0E, \
       k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B,                  \
        k20,  k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,      k2D,      \
      k30,  k31,  k32,      k34,         k37,      k39,  k3A,  k3B,  k3C, k3D, k3E  \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, KC_NO, KC_NO, KC_NO }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, KC_NO, k2D, KC_NO }, \
    { k30, k31, k32, KC_NO, k34, KC_NO, KC_NO, k37, KC_NO, k39, k3A, k3B, k3C, k3D, k3E }, \
} 

#endif
