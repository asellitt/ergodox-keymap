#include "quantum.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

#define MACRO_ROCKET SEND_STRING( \
  SS_TAP(X_EQUAL) SS_LSFT(SS_TAP(X_DOT)) \
)

#define MACRO_DEV_CREDIT_CARD SEND_STRING( \
  "4111111145551142" \
  SS_DELAY(100) SS_TAP(X_TAB) SS_DELAY(100) "1" \
  SS_DELAY(100) SS_TAP(X_TAB) SS_DELAY(100) "22" \
  SS_DELAY(100) SS_TAP(X_TAB) SS_DELAY(100) "737" \
)
