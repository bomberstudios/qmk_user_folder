// Remember to define COMBO_COUNT in config.h
// TODO: see if I can get away with only defining one enum per combo with multiple triggers (i.e: get rid of the duplicated Colemak combo enums)
enum combos {
  COMBO_CAPSLOCK,
  COMBO_CAPSLOCK_COLEMAK,
  COMBO_PARENS_LEFT,
  COMBO_PARENS_RIGHT,
  COMBO_PARENS_LEFT_COLEMAK,
  COMBO_PARENS_RIGHT_COLEMAK,
  COMBO_BRACKET_LEFT,
  COMBO_BRACKET_RIGHT,
  COMBO_BRACKET_LEFT_COLEMAK,
  COMBO_BRACKET_RIGHT_COLEMAK,
  COMBO_COPY,
  COMBO_PASTE,
  COMBO_COPY_COLEMAK,
  COMBO_PASTE_COLEMAK,
  COMBO_CURLY_LEFT,
  COMBO_CURLY_RIGHT,
  COMBO_CURLY_LEFT_COLEMAK,
  COMBO_CURLY_RIGHT_COLEMAK,
  COMBO_UNDO,
  COMBO_REDO,
  COMBO_UNDO_COLEMAK,
  COMBO_REDO_COLEMAK,
  // QAZ Combos
  COMBO_BACKSPACE,
  COMBO_BACKSPACE_COLEMAK,
  COMBO_ENTER,
  COMBO_ENTER_COLEMAK,
  COMBO_TAB,
  COMBO_QUESTION,
};

// const uint16_t PROGMEM combo_tab[] =      {KC_R, KC_T, COMBO_END};
// const uint16_t PROGMEM combo_esc[] =      {KC_Q, CTL_A, COMBO_END}; // we need to merge this PR for this to work: https://github.com/qmk/qmk_firmware/pull/8591/files
const uint16_t PROGMEM combo_capslock[] = {CTL_A, ALT_S, COMBO_END};
const uint16_t PROGMEM combo_capslock_colemak[] = {KC_A, KC_R, COMBO_END};
// const uint16_t PROGMEM combo_capslock_colemak[] = {CTL_A, ALT_R, COMBO_END};
const uint16_t PROGMEM combo_parens_left[] = {SHT_F, KC_R, COMBO_END};
const uint16_t PROGMEM combo_parens_right[] = {SHT_J, KC_U, COMBO_END};
const uint16_t PROGMEM combo_parens_left_colemak[] = {SHT_T, KC_P, COMBO_END};
const uint16_t PROGMEM combo_parens_right_colemak[] = {SHT_N, KC_L, COMBO_END};
const uint16_t PROGMEM combo_bracket_left[] = {CMD_D, KC_E, COMBO_END};
const uint16_t PROGMEM combo_bracket_right[] = {CMD_K, KC_I, COMBO_END};
// const uint16_t PROGMEM combo_bracket_left_colemak[] = {KC_S, KC_F, COMBO_END};
// const uint16_t PROGMEM combo_bracket_right_colemak[] = {KC_E, KC_U, COMBO_END};
const uint16_t PROGMEM combo_bracket_left_colemak[] = {CMD_S, KC_F, COMBO_END};
const uint16_t PROGMEM combo_bracket_right_colemak[] = {CMD_E, KC_U, COMBO_END};
const uint16_t PROGMEM combo_copy[]  = {SHT_F, KC_V, COMBO_END};
const uint16_t PROGMEM combo_paste[] = {SHT_J, KC_M, COMBO_END};
const uint16_t PROGMEM combo_copy_colemak[] = {SHT_T, KC_V, COMBO_END};
const uint16_t PROGMEM combo_paste_colemak[] = {SHT_N, KC_M, COMBO_END};
const uint16_t PROGMEM combo_curly_left[] = {ALT_S, KC_W, COMBO_END};
const uint16_t PROGMEM combo_curly_right[] = {ALT_L, KC_O, COMBO_END};
const uint16_t PROGMEM combo_curly_left_colemak[] = {KC_R, KC_W, COMBO_END};
const uint16_t PROGMEM combo_curly_right_colemak[] = {KC_I, KC_Y, COMBO_END};
// const uint16_t PROGMEM combo_curly_left_colemak[] = {ALT_R, KC_W, COMBO_END};
// const uint16_t PROGMEM combo_curly_right_colemak[] = {ALT_I, KC_Y, COMBO_END};
const uint16_t PROGMEM combo_undo[] = {CMD_D, KC_C, COMBO_END};
const uint16_t PROGMEM combo_redo[] = {CMD_K, KC_COMM, COMBO_END};
// const uint16_t PROGMEM combo_undo_colemak[] = {KC_S, KC_C, COMBO_END};
// const uint16_t PROGMEM combo_redo_colemak[] = {KC_E, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_undo_colemak[] = {CMD_S, KC_C, COMBO_END};
const uint16_t PROGMEM combo_redo_colemak[] = {CMD_E, KC_COMM, COMBO_END};
// QAZ
const uint16_t PROGMEM combo_backspace[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_backspace_colemak[] = {KC_Y, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo_enter[] = {ALT_L, CTL_CLN, COMBO_END};
const uint16_t PROGMEM combo_enter_colemak[] = {KC_I, KC_O, COMBO_END};
// const uint16_t PROGMEM combo_enter_colemak[] = {ALT_I, CTL_O, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_question[] = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_CAPSLOCK] = COMBO(combo_capslock, KC_CAPS),
  [COMBO_CAPSLOCK_COLEMAK] = COMBO(combo_capslock_colemak, KC_CAPS),
  [COMBO_PARENS_LEFT] =   COMBO(combo_parens_left, KC_LPRN),
  [COMBO_PARENS_RIGHT] =  COMBO(combo_parens_right, KC_RPRN),
  [COMBO_BRACKET_LEFT] =  COMBO(combo_bracket_left, KC_LBRC),
  [COMBO_BRACKET_RIGHT] = COMBO(combo_bracket_right, KC_RBRC),
  [COMBO_PARENS_LEFT_COLEMAK] =   COMBO(combo_parens_left_colemak, KC_LPRN),
  [COMBO_PARENS_RIGHT_COLEMAK] =  COMBO(combo_parens_right_colemak, KC_RPRN),
  [COMBO_BRACKET_LEFT_COLEMAK] =  COMBO(combo_bracket_left_colemak, KC_LBRC),
  [COMBO_BRACKET_RIGHT_COLEMAK] = COMBO(combo_bracket_right_colemak, KC_RBRC),
  [COMBO_COPY] = COMBO(combo_copy, COPY),
  [COMBO_PASTE] = COMBO(combo_paste, PASTE),
  [COMBO_COPY_COLEMAK] = COMBO(combo_copy_colemak, COPY),
  [COMBO_PASTE_COLEMAK] = COMBO(combo_paste_colemak, PASTE),
  [COMBO_CURLY_LEFT] = COMBO(combo_curly_left, KC_LCBR),
  [COMBO_CURLY_RIGHT] = COMBO(combo_curly_right, KC_RCBR),
  [COMBO_CURLY_LEFT_COLEMAK] = COMBO(combo_curly_left_colemak, KC_LCBR),
  [COMBO_CURLY_RIGHT_COLEMAK] = COMBO(combo_curly_right_colemak, KC_RCBR),
  [COMBO_UNDO] = COMBO(combo_undo, UNDO),
  [COMBO_REDO] = COMBO(combo_redo, REDO),
  [COMBO_UNDO_COLEMAK] = COMBO(combo_undo_colemak, UNDO),
  [COMBO_REDO_COLEMAK] = COMBO(combo_redo_colemak, REDO),
  [COMBO_BACKSPACE] = COMBO(combo_backspace, KC_BSPC),
  [COMBO_BACKSPACE_COLEMAK] = COMBO(combo_backspace_colemak, KC_BSPC),
  [COMBO_ENTER] = COMBO(combo_enter, KC_ENT),
  [COMBO_ENTER_COLEMAK] = COMBO(combo_enter_colemak, KC_ENT),
  [COMBO_TAB] = COMBO(combo_tab, KC_TAB),
  [COMBO_QUESTION] = COMBO(combo_question, KC_QUESTION),
};
