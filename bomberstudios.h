// from https://www.reddit.com/r/olkb/comments/na90z5/how_do_i_use_custom_functions_to_create_custom/gxvxk44/?context=1

// Never shifted
// Sends (kc1) if no shift is held, (kc2) if shift is held
#define SHIFT_NO(kc1, kc2) \
if (record->event.pressed) { \
  if (get_mods() & MOD_MASK_SHIFT) { \
    uint8_t mods_temp = get_mods(); \
    del_mods(MOD_MASK_SHIFT); \
    unregister_code(kc2); \
    register_code(kc2); \
    set_mods(mods_temp); \
  } else { \
    unregister_code(kc1); \
    register_code(kc1); \
  } \
} else { \
  unregister_code(kc1); \
  unregister_code(kc2); \
} return false;

// Normal shift status
// Sends (kc1) if no shift is held, (shift+kc2) if shift is held.
#define SHIFT_NORM(kc1, kc2) \
if (record->event.pressed) { \
  if (get_mods() & MOD_MASK_SHIFT) { \
    unregister_code(kc2); \
    register_code(kc2); \
  } else { \
    unregister_code(kc1); \
    register_code(kc1); \
  } \
} else { \
  unregister_code(kc1); \
  unregister_code(kc2); \
} return false;


/*
To use, add something like this on `keymap.c`:

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case KC_F1:
    SHIFT_NORM(KC_F1, KC_1);  //F1 if no shift, Shift+1(!) if shift
  case KC_F2:
    SHIFT_NORM(KC_F2, KC_2);  //F2 if no shift, Shift+2(@) if shift
  }
}

*/