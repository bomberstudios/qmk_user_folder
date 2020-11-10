// Remember to define COMBO_COUNT in config.h

enum combos {
  COMBO_TAB,
  COMBO_ESC,
  COMBO_CAPSLOCK,
  COMBO_CAPSLOCK_COLEMAK,
  COMBO_PARENS_LEFT,
  COMBO_PARENS_RIGHT,
  COMBO_BRACKET_LEFT,
  COMBO_BRACKET_RIGHT,
};

const uint16_t PROGMEM combo_tab[] =      {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM combo_esc[] =      {KC_Q, CTL_A, COMBO_END}; // we need to merge this PR for this to work: https://github.com/qmk/qmk_firmware/pull/8591/files
const uint16_t PROGMEM combo_capslock[] = {CTL_A, ALT_S, COMBO_END};
const uint16_t PROGMEM combo_capslock_colemak[] = {CTL_A, ALT_R, COMBO_END};
const uint16_t PROGMEM combo_parens_left[] = {SHT_F, KC_R, COMBO_END};
const uint16_t PROGMEM combo_parens_right[] = {SHT_J, KC_U, COMBO_END};
const uint16_t PROGMEM combo_bracket_left[] = {CMD_D, KC_E, COMBO_END};
const uint16_t PROGMEM combo_bracket_right[] = {CMD_K, KC_I, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_TAB] = COMBO(combo_tab, KC_TAB),
  [COMBO_ESC] = COMBO(combo_esc, KC_ESC),
  [COMBO_CAPSLOCK] = COMBO(combo_capslock, KC_CAPS),
  [COMBO_CAPSLOCK_COLEMAK] = COMBO(combo_capslock_colemak, KC_CAPS),
  [COMBO_PARENS_LEFT] =   COMBO(combo_parens_left, KC_LPRN),
  [COMBO_PARENS_RIGHT] =  COMBO(combo_parens_right, KC_RPRN),
  [COMBO_BRACKET_LEFT] =  COMBO(combo_bracket_left, KC_LBRC),
  [COMBO_BRACKET_RIGHT] = COMBO(combo_bracket_right, KC_RBRC),
};
