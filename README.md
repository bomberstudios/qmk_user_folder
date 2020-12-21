# My QMK User Folder

This is my user folder for [QMK](https://qmk.fm). It contains common settings for all my keyboards.

Feel free to look around, but do not be surprised if most of the code is horrible, useless, or both. Proceed at your own risk.

## TODO

- [ ] Keycode to flash keyboard, as seen on `drashna`

## Changelog

### 2020-12-21

- Fixed Colemak combos
- Default to Colemak layout

### 2020-12-06

- Added combos for Copy and Paste, because I can't believe I still make errors with those shortcuts sometimes:
  - `F+D` → Copy
  - `J+K` → Paste
- Added combos for {}:
  - `S+W` → {
  - `L+O` → }
- Added combos for Undo (maybe I want to swap these for the Copy / Paste shortcuts if I find I like htem a bit more):
  - `F+V` → Undo (Cmd + Z)
  - `J+M` → Redo (Cmd + Shift + Z)
- Tweaked tapping term again, back to 150 to see how it works. I'm having issues with layer switching on the Atreus (maybe due to the linear switches?) so let's see if this makes the situation better.

### 2020-11-10

- The combos I'm using for () and [] interfere with Cmd+Shift and Cmd+Alt shortcuts, so I've moved them around a bit. Now they work like this:
  - `F+R` → `(` (or `T+P` in Colemak)
  - `J+U` → `)` (or `N+L` in Colemak)
  - `D+E` → `[` (or `S+F` in Colemak)
  - `K+I` → `]` (or `E+U` in Colemak)

Now I _really_ need to get lighter springs for my switches :P


### 2020-11-09

- Removed HOLD_ON_OTHER_KEY_PRESS
- Removed RETRO_TAPPING
- Added combos for parens and brackets, so I can type them without leaving the home row.