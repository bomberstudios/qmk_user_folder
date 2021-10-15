#include QMK_KEYBOARD_H

#include "keycodes.h"
//#include "bomberstudios.h"

#ifdef COMBO_ENABLE
#include "combos.h"
#endif

bool is_cmd_tab_active = false;
bool is_ctl_tab_active = false;
uint16_t cmd_tab_timer = 0;
uint16_t ctl_tab_timer = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case COLEMAK:
      set_single_persistent_default_layer(_COLEMAK);
      break;
    case QWERTY:
      set_single_persistent_default_layer(_QWERTY);
      break;
    case M_COLON:
      if (record->event.pressed) {
        register_code16(KC_COLON);
      }
      break;
    case M_EMAIL:
      if (record->event.pressed) {
        SEND_STRING("bomberstudios@gmail.com");
      }
      break;
    // This is a neat trick: hold a key to copy, and when you release the key, it will paste
    case CPYPASTE:
      if (record->event.pressed) {
        tap_code16(G(KC_C));
      } else {
        tap_code16(G(KC_V));
      }
      break;
    case CMD_TAB:
      if (record->event.pressed) {
        if (!is_cmd_tab_active) {
          is_cmd_tab_active = true;
          register_code(KC_LGUI);
        }
        cmd_tab_timer = timer_read();
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      break;
    case CTL_TAB:
      if (record->event.pressed) {
        if (!is_ctl_tab_active) {
          is_ctl_tab_active = true;
          register_code(KC_LCTL);
        }
        ctl_tab_timer = timer_read();
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      break;
    case RANDOM:
      // This outputs a random item from `randomArray`
      // Sounds like a pretty useless feature, but it'll make sense eventually
      if (record->event.pressed) {
        #define ARRAY_SIZE 10
        const char *randomArray[] = {
          "0",
          "1",
          "2",
          "3",
          "4",
          "5",
          "6",
          "7",
          "8",
          "9"
        };
        srand(timer_read());
        int n = rand()%ARRAY_SIZE;
        send_string(randomArray[n]);
      }
      break;
      // TODO: reverse shift behaviour for semicolon key, so far I've been unable to get it to worke
    // case KC_SCLN:
    //   SHIFT_NO(KC_1, KC_SCLN);
    //   break;
  }
  return true;
};

void matrix_scan_user(void) {
  if (is_cmd_tab_active) {
    // If nothing is tapped in 800 milliseconds, reset the timer
    if (timer_elapsed(cmd_tab_timer) > 800) {
      unregister_code(KC_LGUI);
      is_cmd_tab_active = false;
    }
  }
  if (is_ctl_tab_active) {
    // If nothing is tapped in 800 milliseconds, reset the timer
    if (timer_elapsed(ctl_tab_timer) > 800) {
      unregister_code(KC_LCTL);
      is_ctl_tab_active = false;
    }
  }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // case SHT_J:
    //   return TAPPING_TERM - 50;
    // case CTL_A:
    case SPC_3:
      return TAPPING_TERM + 100; // I think I can finally reduce this value from 150 to 50
    // Colemak home row mods need a much higher tapping term
    // while I'm learning, otherwise they won't register
    // Alternatively, I could enable RETRO TAPPING on Colemak?
    case SHT_T:
    case SHT_N:
      return TAPPING_TERM - 50;
    // case CMD_S:
    // case CMD_E:
    case ALT_R:
    case ALT_I:
    case CTL_A:
    case CTL_O:
      return TAPPING_TERM + 400; // Yes, this is quite extreme, but looks like my left pinkie is *slow*
    default:
      return TAPPING_TERM;
  }
}