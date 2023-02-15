#ifdef QAZ
enum layer_names {
  _QWERTY,
  _COLEMAK,
  _NUMBER,
  _SYMBOL,
  _MOVE,
  _UNICODE,
  _ADJUST,
};
#else
enum layer_names {
  _COLEMAK,
  _QWERTY,
  _NUMBER,
  _SYMBOL,
  _MOVE,
  _UNICODE,
  _ADJUST,
};
#endif

enum custom_keycodes {
  COLEMAK = SAFE_RANGE,
  QWERTY,
  NUMBER,
  SYMBOL,
  MOVE,
  UNICODE,
  M_EMAIL,
  M_COLON,
  CPYPASTE,
  CMD_TAB,
  CTL_TAB,
  RANDOM,
  ZOOMLEFT,
  ZOOMRIGHT,
  ZOOMFULL
  // COLEBAS
};

// Window movement
#define ZOOMLEFT LWIN(LSFT(LCTL(LALT(KC_LEFT))))
#define ZOOMRIGHT LWIN(LSFT(LCTL(LALT(KC_RIGHT))))
#define ZOOMFULL LWIN(LALT(LCTL(KC_Z)))

#define L_COL TG(_QWERTY)
#define COLEMAK TG(_QWERTY)
// #define COLEBAS TG(_COLEMAK_BASIC)
#define L_NUM MO(_NUMBER)
// #define L_NUM LT(_NUMBER,KC_ENT)
#define L_SYM LT(_SYMBOL,KC_TAB)
#define L_MOM MO(_MOVE)
#define L_ADJ MO(_ADJUST)
#define L_UC LT(_UNICODE,KC_TAB)

// macOS Shortcuts
#define COPY  LWIN(KC_C)
#define PASTE LWIN(KC_V)
#define CUT LWIN(KC_X)
#define UNDO LWIN(KC_Z)
#define REDO LSFT(LWIN(KC_Z))
#define SHT_SCR LWIN(LSFT(KC_3))
#define SHT_ARE LWIN(LSFT(KC_4))
#define SHT_OPT LWIN(LSFT(KC_5))
#define START LWIN(KC_LEFT)
#define END LWIN(KC_RGHT)

// TextMate
#define LINEUP  LWIN(LCTL(KC_UP))
#define LINEDWN LWIN(LCTL(KC_DOWN))
#define LINEDUP LSFT(LCTL(KC_D))
#define LINEDEL LSFT(LCTL(KC_K))

// Sketch
#define SKRUN LSFT(LCTL(KC_K))
#define SKRUNAG  LSFT(LCTL(KC_R))
#define ZOOMIN   LWIN(KC_PLUS)
#define ZOOMOUT  LWIN(KC_MINUS)
#define ZENMODE   LWIN(KC_DOT)

// Nice names
#define Ctrl KC_LCTL
#define Alt KC_LALT
#define Cmd KC_LGUI
#define Shift KC_LSFT

// Mods in home row, using Mod Tap
#define CTL_A MT(MOD_LCTL,KC_A) // CTL_T(KC_A)
#define ALT_S MT(MOD_LALT,KC_S) // ALT_T(KC_S)
#define CMD_D MT(MOD_LGUI,KC_D) // CMD_T(KC_D)
#define SHT_F MT(MOD_LSFT,KC_F)
#define SHT_J MT(MOD_LSFT,KC_J)
#define CMD_K MT(MOD_LGUI,KC_K)
#define ALT_L MT(MOD_LALT,KC_L)
#define CTL_CLN MT(MOD_LCTL,KC_SCLN) // hypothesis: I will never need a semicolon. And when I need it, I can use a layer -> Bad luck!. From the docs: "Unfortunately, these keycodes cannot be used in Mod-Taps or Layer-Taps, since any modifiers specified in the keycode are ignored."
// #define CTL_CLN MT(MOD_LCTL,M_COLON) // Doesnt seem to work...

// Home row mods for Colemak
#define ALT_R MT(MOD_LALT,KC_R)
#define CMD_S MT(MOD_LGUI,KC_S)
#define SHT_T MT(MOD_LSFT,KC_T)
#define SHT_N MT(MOD_LSFT,KC_N)
#define CMD_E MT(MOD_LGUI,KC_E)
#define ALT_I MT(MOD_LALT,KC_I)
#define CTL_O MT(MOD_LCTL,KC_O)

#define SPC_1 LT(1,KC_SPC)
#define BSP_1 LT(1,KC_BSPC)
#define SPC_2 LT(2,KC_SPC)
#define BSP_2 LT(2,KC_BSPC)
#define SPC_3 LT(_MOVE,KC_SPC)
#define BSP_3 LT(3,KC_BSPC)
#define SPC_4 LT(4,KC_SPC)
#define BSP_4 LT(4,KC_BSPC)

#define CMD_0 LWIN(KC_0)
#define CMD_1 LWIN(KC_1)
#define CMD_2 LWIN(KC_2)
#define CMD_3 LWIN(KC_3)
#define CMD_4 LWIN(KC_4)
#define CMD_5 LWIN(KC_5)

// to be used with Karabiner to launch apps, and other stuff
#define HYPRTAB HYPR_T(KC_TAB)
#define HYPRESC HYPR_T(KC_ESC)
