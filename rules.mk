SRC += bomberstudios.c

COMBO_ENABLE = yes
NKRO_ENABLE = yes
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = no

# UNICODEMAP_ENABLE = yes

# Use shared split_common code (doesn't seem to work yet for Corne, works for Ferris)
ifeq ($(strip($(KEYBOARD))),ferris/sweep)
  SPLIT_KEYBOARD = yes
endif

ifeq ($(strip($(KEYBOARD))),crkbd/rev1)
  SPLIT_KEYBOARD = yes
endif

ifeq ($(strip($(KEYBOARD))),z34)
  SPLIT_KEYBOARD = yes
endif

ifeq ($(strip($(KEYBOARD))),keyboardio/atreus)
endif
# TAP_DANCE_ENABLE = yes

ifeq ($(strip($(KEYBOARD))),preonic/rev3)
  PREONIC = yes
endif

ifeq ($(strip($(KEYBOARD))),qaz)
  QAZ = yes
endif