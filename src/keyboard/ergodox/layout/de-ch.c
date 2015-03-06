/* ----------------------------------------------------------------------------
* ergoDOX layout : QWERTY (modified from the Kinesis layout)
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  agrprre  &kbfun_altgr_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad
// ----------------------------------------------------------------------------

// OTHER NAMES FOR CH KEYS ----------------------------------------------------
#define _ch_degree		KEY_GraveAccent_Tilde
#define _ch_question	KEY_Dash_Underscore
#define _ch_caret		KEY_Equal_Plus
#define _ch_lessThan	KEY_NonUS_Backslash_Pipe
#define _ch_ue			KEY_LeftBracket_LeftBrace
#define _ch_exclamation	KEY_RightBracket_RightBrace
#define _ch_oe			KEY_Semicolon_Colon
#define _ch_ae			KEY_SingleQuote_DoubleQuote
#define _ch_dollar		KEY_NonUS_Pound_Tilde
#define _ch_comma		KEY_Comma_LessThan
#define _ch_period		KEY_Period_GreaterThan
#define _ch_dash		KEY_Slash_Question

// ----------------------------------------------------------------------------


// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	_ch_degree,	_1,	_2,	_3,	_4,	_5,	_esc,	
	_tab,		_Q,	_W,	_E,	_R,	_T,	2,	
	2,			_A,	_S,	_D,	_F,	_G,	
	_shiftL,	_Z,	_X,	_C,	_V,	_B,	1,	
	_guiL,	_ch_lessThan,	_ch_caret,	_ch_exclamation,	_ch_dollar,	
	_ctrlL,	_altL,	
	0,	0,	_home,	
	_bs,	_del,	_end,	
	// right hand
	_esc,	_6,	_7,	_8,	_9,	_0,	_ch_question,	
	2,		_Y,	_U,	_I,	_O,	_P,	_ch_ue,	
			_H,	_J,	_K,	_L,	_ch_oe,	_ch_ae,	
	1,	_N,	_M,	_ch_comma,	_ch_period,	_ch_dash,	_shiftR,	
	_arrowL,	_arrowD,	_arrowU,	_arrowR,	_guiR,	
	_altR,	_ctrlR,	
	_pageU,	0,	0,	
	_pageD,	_enter,	_space	
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	2,	
	2,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	1,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	_ch_ue,	_ch_exclamation,	0,	0,	0,	
	0,	0,	_ch_ae,	_ch_dollar,	0,	0,	0,	
	0,	_8,	_9,	0,	0,	0,	
	0,	0,	_ch_lessThan,	_ch_lessThan,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	_F1,	_F2,	_F3,	_F4,	_F5,	_F11,	
	0,	_F6,	_F7,	_F8,	_F9,	_F10,	2,	
	2,	_F11,	_F12,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	1,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	_F12,	_F6,	_F7,	_F8,	_F9,	_F10,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush2,	
	lpush2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush1,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	NULL,	NULL,	kprrel,	
	kprrel,	kprrel,	kprrel,	
	// right hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpush2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpush1,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	kprrel,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel	
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	lpush2,	
	lpush2,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	lpush1,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	agrprre,	agrprre,	NULL,	NULL,	NULL,	
	lpush2,	NULL,	agrprre,	agrprre,	NULL,	NULL,	NULL,	
	NULL,	sshprre,	sshprre,	NULL,	NULL,	NULL,	
	lpush1,	NULL,	kprrel,	sshprre,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	dbtldr,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush2,	
	lpop2,	kprrel,	kprrel,	NULL,	NULL,	NULL,	
	ktrans,	NULL,	NULL,	NULL,	NULL,	NULL,	lpush1,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	ktrans,	ktrans,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	lpush2,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	lpush1,	NULL,	NULL,	NULL,	NULL,	NULL,	ktrans,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	ktrans,	ktrans,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop2,	
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop1,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	NULL,	NULL,	kprrel,	
	kprrel,	kprrel,	kprrel,	
	// right hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpop2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpop1,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	kprrel,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel	
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	lpop2,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	lpop1,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	agrprre,	agrprre,	NULL,	NULL,	NULL,	
	lpop2,	NULL,	agrprre,	agrprre,	NULL,	NULL,	NULL,	
	NULL,	sshprre,	sshprre,	NULL,	NULL,	NULL,	
	lpop1,	NULL,	kprrel,	sshprre,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop2,	
	NULL,	kprrel,	kprrel,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	lpop1,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	lpop2,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	lpop1,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
};
// ----------------------------------------------------------------------------
