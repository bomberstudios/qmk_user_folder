#pragma once

#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD

#define HOLD_ON_OTHER_KEY_PRESS // See https://github.com/qmk/qmk_firmware/blob/155cc17359711a6dd7b67119ec994800588ebaaa/docs/tap_hold.md#hold-on-other-key-press
// #define RETRO_TAPPING // wish there was a retro tapping per key, because I'd like to have this only for some keys. But so be it…

#undef TAPPING_TERM
#ifdef PREONIC
  #define TAPPING_TERM 250
  #define RETRO_TAPPING
#else
  #define TAPPING_TERM 250 // how low can we go with this? I'm seeing issues lately with this and feels like I can go lower... Let's try 100 (down from the original 150) -> However, looks like I'm not seeing those on Colemak, so maybe it's actually a problem of it being too fast?
// 2020-11-23: looks like 100 is actually worse, so I'm going to see if I can tweak the tapping term for Tab. Meanwhile, let me try with 200
// 2020-12-19: let's try 100 again, now that I've enabled HOLD_ON_OTHER_KEY_PRESS
// 2020-12-19: 100 is unusable with HOLD_ON_OTHER_KEY_PRESS, let's try 300
#endif

// I think I'm going to disable this and see how things work...
// #define TAPPING_TERM_PER_KEY

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

#define COMBO_COUNT 28 // There's a way to make this dynamic, see https://github.com/whydobearsxplod/qmk_user_folder for more info

#ifdef QAZ
#define COMBO_TERM 100
// TODO: actually, what I want to do is define an entirely different set of combos for the qaz, because the ones that use the home row don't really make sense for row-staggered keyboards. But while I get there, this will do...
#endif