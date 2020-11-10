#pragma once

#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD

// #define HOLD_ON_OTHER_KEY_PRESS // See https://github.com/qmk/qmk_firmware/blob/155cc17359711a6dd7b67119ec994800588ebaaa/docs/tap_hold.md#hold-on-other-key-press
// #define RETRO_TAPPING // wish there was a retro tapping per key, because I'd like to have this only for some keys. But so be it…

#undef TAPPING_TERM
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY

#define UNICODE_SELECTED_MODES UC_MAC

// Only for splits, this assumes we'll flash the halves using :avrdude-split-left
#define EE_HANDS

#undef NO_DEBUG
#define NO_DEBUG
#undef NO_PRINT
#define NO_PRINT


// #ifdef TAP_DANCE_ENABLE
// #include "tap_dances.h"
// #endif

#define COMBO_COUNT 8 // There's a way to make this dynamic, see https://github.com/whydobearsxplod/qmk_user_folder for more info
