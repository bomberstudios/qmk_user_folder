#pragma once

#undef TAPPING_TERM

// #define PERMISSIVE_HOLD // turning this off because it kinda defeats the purpose of having a long tapping term for Alt and Control
#define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD

// #define HOLD_ON_OTHER_KEY_PRESS // See https://github.com/qmk/qmk_firmware/blob/155cc17359711a6dd7b67119ec994800588ebaaa/docs/tap_hold.md#hold-on-other-key-press -> this makes home row mods unusable for fast typists, because you can't do rolls without triggering the wrong combination. So, let's keep it off
// #define RETRO_TAPPING // wish there was a retro tapping per key, because I'd like to have this only for some keys. But so be it…

#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY

// #define UNICODE_SELECTED_MODES UC_MAC

// Only for splits, this assumes we'll flash the halves using :avrdude-split-left
#ifdef SPLIT_KEYBOARD
#define EE_HANDS
#endif

#undef NO_DEBUG
#define NO_DEBUG
#undef NO_PRINT
#define NO_PRINT

// #ifdef TAP_DANCE_ENABLE
// #include "tap_dances.h"
// #endif

#define COMBO_COUNT 28 // There's a way to make this dynamic, see https://github.com/whydobearsxplod/qmk_user_folder for more info

#ifdef QAZ
#define COMBO_TERM 100
// TODO: actually, what I want to do is define an entirely different set of combos for the qaz, because the ones that use the home row don't really make sense for row-staggered keyboards. But while I get there, this will do...
#endif


