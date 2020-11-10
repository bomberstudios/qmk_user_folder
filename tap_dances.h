// #include QMK_KEYBOARD_H

// Tap Dances
#define TD_QCL TD(TD_Q_CAPS)
#define TD_IOS TD(TD_IOS_MEDIA)

enum tap_dance {
  TD_Q_CAPS,
  TD_IOS_MEDIA,
};

void ios_media(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        tap_code(KC_MPLY);
    } else if (state->count == 2) {
        tap_code(KC_MNXT);
    } else if (state->count == 3) {
        tap_code(KC_MPRV);
    } else {
        reset_tap_dance(state);
    }
};

qk_tap_dance_action_t tap_dance_actions[] = {
  // Tap once for Escape, twice for Caps Lock
  [TD_Q_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_CAPS),
  [TD_IOS_MEDIA] = ACTION_TAP_DANCE_FN(ios_media),
};
