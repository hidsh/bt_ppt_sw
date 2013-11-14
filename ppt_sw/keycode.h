/*
 * keycode.h
 *
 * Created: 2013/06/03 11:31:05
 */

#ifndef __KEYCODE_H__
#define __KEYCODE_H__


/* ---------------------------------------------------------------------
 * USAGE ID (KBD SCAN CODE for HID REPORT)
 */
#define BLUETOOTH 1

#define USID_NONE                   0x00 /* no event               */

#ifdef BLUETOOTH
  #define USID_ERR_OVERRUN          0x01 /* overrun error          */
  #define USID_ERR_POST_FAIL        0x02 /* post fail              */
  #define USID_ERR_UNDEFINED        0x03 /* undefined error        */
#endif

#define USID_KBD_A                  0x04 /* a                      */
#define USID_KBD_B                  0x05 /* b                      */
#define USID_KBD_C                  0x06 /* c                      */
#define USID_KBD_D                  0x07 /* d                      */
#define USID_KBD_E                  0x08 /* e                      */
#define USID_KBD_F                  0x09 /* f                      */
#define USID_KBD_G                  0x0A /* g                      */
#define USID_KBD_H                  0x0B /* h                      */
#define USID_KBD_I                  0x0C /* i                      */
#define USID_KBD_J                  0x0D /* j                      */
#define USID_KBD_K                  0x0E /* k                      */
#define USID_KBD_L                  0x0F /* l                      */
#define USID_KBD_M                  0x10 /* m                      */
#define USID_KBD_N                  0x11 /* n                      */
#define USID_KBD_O                  0x12 /* o                      */
#define USID_KBD_P                  0x13 /* p                      */
#define USID_KBD_Q                  0x14 /* q                      */
#define USID_KBD_R                  0x15 /* r                      */
#define USID_KBD_S                  0x16 /* s                      */
#define USID_KBD_T                  0x17 /* t                      */
#define USID_KBD_U                  0x18 /* u                      */
#define USID_KBD_V                  0x19 /* v                      */
#define USID_KBD_W                  0x1A /* w                      */
#define USID_KBD_X                  0x1B /* x                      */
#define USID_KBD_Y                  0x1C /* y                      */
#define USID_KBD_Z                  0x1D /* z                      */
#define USID_KBD_1                  0x1E /* 1 !                    */
#define USID_KBD_2                  0x1F /* 2 @                    */
#define USID_KBD_3                  0x20 /* 3 #                    */
#define USID_KBD_4                  0x21 /* 4 $                    */
#define USID_KBD_5                  0x22 /* 5 %                    */
#define USID_KBD_6                  0x23 /* 6 ^                    */
#define USID_KBD_7                  0x24 /* 7 &                    */
#define USID_KBD_8                  0x25 /* 8 *                    */
#define USID_KBD_9                  0x26 /* 9 (                    */
#define USID_KBD_0                  0x27 /* 0 )                    */
#define USID_KBD_RETURN             0x28 /* RETURN                 */
#define USID_KBD_ESC                0x29 /* ESC                    */
#define USID_KBD_BACKSPACE          0x2A /* BACKSPACE              */
#define USID_KBD_TAB                0x2B /* TAB                    */
#define USID_KBD_SPACE              0x2C /* SPACE                  */
#define USID_KBD_HYPHEN             0x2D /* - _                    */
#define USID_KBD_EQUAL              0x2E /* = +                    */
#define USID_KBD_BRACKET_START      0x2F /* [ {                    */
#define USID_KBD_BRACKET_END        0x30 /* ] }                    */
#define USID_KBD_BACK_SLASH         0x31 /* \ |                    */
/*                                  0x32    ---------------------- */
#define USID_KBD_SEMI_COLON         0x33 /* ; :                    */
#define USID_KBD_QUOTE              0x34 /* ' "                    */
#define USID_KBD_GRAVE_ACCENT       0x35 /* ` ~                    */
#define USID_KBD_COMMA              0x36 /* , <                    */
#define USID_KBD_DOT                0x37 /* . >                    */
#define USID_KBD_SLASH              0x38 /* / ?                    */
#define USID_KBD_CAPSLOCK           0x39 /* CAPS LOCK              */
#define USID_KBD_F1                 0x3A /* F1                     */
#define USID_KBD_F2                 0x3B /* F2                     */
#define USID_KBD_F3                 0x3C /* F3                     */
#define USID_KBD_F4                 0x3D /* F4                     */
#define USID_KBD_F5                 0x3E /* F5                     */
#define USID_KBD_F6                 0x3F /* F6                     */
#define USID_KBD_F7                 0x40 /* F7                     */
#define USID_KBD_F8                 0x41 /* F8                     */
#define USID_KBD_F9                 0x42 /* F9                     */
#define USID_KBD_F10                0x43 /* F10                    */
#define USID_KBD_F11                0x44 /* F11                    */
#define USID_KBD_F12                0x45 /* F12                    */
#define USID_KBD_PRINT_SCREEN       0x46 /* Print Screen           */
#define USID_KBD_SCROLL_LOCK        0x47 /* Scroll Lock            */
#define USID_KBD_PAUSE              0x48 /* Pause                  */

#define USID_KBD_INSERT             0x49 /* Insert                 */
#define USID_KBD_HOME               0x4A /* Home                   */
#define USID_KBD_PAGE_UP            0x4B /* PageUp                 */
#define USID_KBD_DELETE             0x4C /* Delete Forward (DEL)   */
#define USID_KBD_END                0x4D /* End                    */
#define USID_KBD_PAGE_DOWN          0x4E /* PageDown               */
#define USID_KBD_ARROW_R            0x4F /* Right Arrow            */
#define USID_KBD_ARROW_L            0x50 /* Left Arrow             */
#define USID_KBD_ARROW_D            0x51 /* Down Arrow             */
#define USID_KBD_ARROW_U            0x52 /* Up Arrow               */
#define USID_PAD_NUM_LOCK           0x53 /* Num Lock               */
#define USID_PAD_SLASH              0x54 /* /                (PAD) */
#define USID_PAD_ASTER              0x55 /* *                (PAD) */
#define USID_PAD_HYPHEN             0x56 /* -                (PAD) */
#define USID_PAD_PLUS               0x57 /* +                (PAD) */
#define USID_PAD_ENTER              0x58 /* Enter            (PAD) */
#define USID_PAD_1                  0x59 /* 1                (PAD) */
#define USID_PAD_2                  0x5A /* 2                (PAD) */
#define USID_PAD_3                  0x5B /* 3                (PAD) */
#define USID_PAD_4                  0x5C /* 4                (PAD) */
#define USID_PAD_5                  0x5D /* 5                (PAD) */
#define USID_PAD_6                  0x5E /* 6                (PAD) */
#define USID_PAD_7                  0x5F /* 7                (PAD) */
#define USID_PAD_8                  0x60 /* 8                (PAD) */
#define USID_PAD_9                  0x61 /* 9                (PAD) */
#define USID_PAD_0                  0x62 /* 0                (PAD) */
#define USID_PAD_DOT                0x63 /* .                (PAD) */
/*                                  0x64    ---------------------- */
#define USID_KBD_APP                0x65 /* Application            */
#define USID_KBD_POWER              0x66 /* Power                  */
#define USID_PAD_EQUAL              0x67 /* =                (PAD) */
#define USID_KBD_F13                0x68 /* F13                    */
#define USID_KBD_F14                0x69 /* F14                    */
#define USID_KBD_F15                0x6A /* F15                    */
#define USID_KBD_F16                0x6B /* F16                    */
#define USID_KBD_F17                0x6C /* F17                    */
#define USID_KBD_F18                0x6D /* F18                    */
#define USID_KBD_F19                0x6E /* F19                    */
#define USID_KBD_F20                0x6F /* F20                    */
#define USID_KBD_F21                0x70 /* F21                    */
#define USID_KBD_F22                0x71 /* F22                    */
#define USID_KBD_F23                0x72 /* F23                    */
#define USID_KBD_F24                0x73 /* F24                    */
#define USID_KBD_EXECUTE            0x74 /* Execute                */
#define USID_KBD_HELP               0x75 /* Help                   */
#define USID_KBD_MENU               0x76 /* Menu                   */
#define USID_KBD_SELECT             0x77 /* Select                 */
#define USID_KBD_STOP               0x78 /* Stop                   */
#define USID_KBD_AGAIN              0x79 /* Again                  */
#define USID_KBD_UNDO               0x7A /* Undo                   */
#define USID_KBD_CUT                0x7B /* Cut                    */
#define USID_KBD_COPY               0x7C /* Copy                   */
#define USID_KBD_PASTE              0x7D /* Paste                  */
#define USID_KBD_FIND               0x7E /* Find                   */
#define USID_KBD_MUTE               0x7F /* Mute                   */
#define USID_KBD_VOL_UP             0x80 /* Volume Up              */
#define USID_KBD_VOL_DOWN           0x81 /* Volume Down            */
#define USID_KBD_LOCK_CAPS          0x82 /* Locking Caps Lock      */
#define USID_KBD_LOCK_NUM           0x83 /* Locking Num Lock       */
#define USID_KBD_LOCK_SCROLL        0x84 /* Locking Scroll Lock    */
#define USID_PAD_COMMA              0x85 /* ,                (PAD) */
#define USID_KBD_INTERNATIONAL1     0x87 /* International 1        */
#define USID_KBD_INTERNATIONAL2     0x88 /* International 2        */
#define USID_KBD_INTERNATIONAL3     0x89 /* International 3        */
#define USID_KBD_INTERNATIONAL4     0x8A /* International 4        */
#define USID_KBD_INTERNATIONAL5     0x8B /* International 5        */
#define USID_KBD_INTERNATIONAL6     0x8C /* International 6        */
#define USID_KBD_INTERNATIONAL7     0x8D /* International 7        */
#define USID_KBD_INTERNATIONAL8     0x8E /* International 8        */
#define USID_KBD_INTERNATIONAL9     0x8F /* International 9        */
#define USID_KBD_LANG1              0x90 /* LANG 1                 */
#define USID_KBD_LANG2              0x91 /* LANG 2                 */
#define USID_KBD_LANG3              0x92 /* LANG 3                 */
#define USID_KBD_LANG4              0x93 /* LANG 4                 */
#define USID_KBD_LANG5              0x94 /* LANG 5                 */
#define USID_KBD_LANG6              0x95 /* LANG 6                 */
#define USID_KBD_LANG7              0x96 /* LANG 7                 */
#define USID_KBD_LANG8              0x97 /* LANG 8                 */
#define USID_KBD_LANG9              0x98 /* LANG 9                 */
#define USID_KBD_ALTERNATE_ERASE    0x99 /* Alternate Erase        */
#define USID_KBD_SYSREQ             0x9A /* SysReq                 */
#define USID_KBD_CANCEL             0x9B /* Cancel                 */
#define USID_KBD_CLEAR              0x9C /* Clear                  */
#define USID_KBD_PRIOR              0x9D /* Prior                  */
#define USID_KBD_SEPARATOR          0x9F /* Separator              */
#define USID_KBD_OUT                0xA0 /* Out                    */
#define USID_KBD_OPER               0xA1 /* Oper                   */
#define USID_KBD_CLEAR_AGAIN        0xA2 /* Clear/Again            */
#define USID_KBD_CRSEL_PROPS        0xA3 /* CrSel/Props            */
#define USID_KBD_CRSEL_EXSEL        0xA4 /* ExSel                  */
/*                                  0xA5    ---------------------- */
/*                                  0xA6    ---------------------- */
/*                                  0xA7    ---------------------- */
/*                                  0xA8    ---------------------- */
/*                                  0xA9    ---------------------- */
/*                                  0xAA    ---------------------- */
/*                                  0xAB    ---------------------- */
/*                                  0xAC    ---------------------- */
/*                                  0xAD    ---------------------- */
/*                                  0xAE    ---------------------- */
/*                                  0xAF    ---------------------- */
#define USID_PAD_00                 0xB0 /* 00               (PAD) */
#define USID_PAD_000                0xB1 /* 000              (PAD) */
#define USID_KBD_THO_SEPARATOR      0xB2 /* Tousands Separator     */
#define USID_KBD_DEC_SEPARATOR      0xB3 /* Decimal Separator      */
#define USID_KBD_CURRENCY_UNIT      0xB4 /* Currency Unit          */
#define USID_KBD_CURRENCY_SUB_UNIT  0xB5 /* Currency Sub-unit      */
#define USID_PAD_PAREN_START        0xB6 /* (                (PAD) */
#define USID_PAD_PAREN_END          0xB7 /* )                (PAD) */
#define USID_PAD_BRACE_START        0xB8 /* {                (PAD) */
#define USID_PAD_BRACE_END          0xB9 /* }                (PAD) */
#define USID_PAD_TAB                0xBA /* Tab              (PAD) */
#define USID_PAD_BACK_SPACE         0xBB /* Backspace        (PAD) */
#define USID_PAD_A                  0xBC /* A                (PAD) */
#define USID_PAD_B                  0xBD /* B                (PAD) */
#define USID_PAD_C                  0xBE /* C                (PAD) */
#define USID_PAD_D                  0xBF /* D                (PAD) */
#define USID_PAD_E                  0xC0 /* E                (PAD) */
#define USID_PAD_F                  0xC1 /* F                (PAD) */
#define USID_PAD_XOR                0xC2 /* (xor)            (PAD) */
#define USID_PAD_HAT                0xC3 /* ^                (PAD) */
#define USID_PAD_PERCENT            0xC4 /* %                (PAD) */
#define USID_PAD_LT                 0xC5 /* <                (PAD) */
#define USID_PAD_GT                 0xC6 /* >                (PAD) */
#define USID_PAD_AND                0xC7 /* &                (PAD) */
#define USID_PAD_AND2               0xC8 /* &&               (PAD) */
#define USID_PAD_OR                 0xC9 /* |                (PAD) */
#define USID_PAD_OR2                0xCA /* ||               (PAD) */
#define USID_PAD_COLON              0xCB /* :                (PAD) */
#define USID_PAD_OCTOTHORPE         0xCC /* #                (PAD) */
#define USID_PAD_SPACE              0xCD /* Space            (PAD) */
#define USID_PAD_AT                 0xCE /* @                (PAD) */
#define USID_PAD_EXCLAMATION        0xCF /* !                (PAD) */
#define USID_PAD_MEM_STORE          0xD0 /* Memory Store     (PAD) */
#define USID_PAD_MEM_RECALL         0xD1 /* Memory Recall    (PAD) */
#define USID_PAD_MEM_CLEAR          0xD2 /* Memory Clear     (PAD) */
#define USID_PAD_MEM_ADD            0xD3 /* Memory Add       (PAD) */
#define USID_PAD_MEM_SUBST          0xD4 /* Memory Substract (PAD) */
#define USID_PAD_MEM_MULT           0xD5 /* Memory Multiply  (PAD) */
#define USID_PAD_MEM_DIV            0xD6 /* Memory Divide    (PAD) */
#define USID_PAD_SIGN               0xD7 /* +/-              (PAD) */
#define USID_PAD_CLEAR              0xD8 /* Clear            (PAD) */
#define USID_PAD_CLEAR_ENTRY        0xD9 /* Clear Entry      (PAD) */
#define USID_PAD_BIN                0xDA /* Binary           (PAD) */
#define USID_PAD_OCT                0xDB /* Octal            (PAD) */
#define USID_PAD_DEC                0xDC /* Decimal          (PAD) */
#define USID_PAD_HEX                0xDD /* Hexadecimal      (PAD) */
/*                                  0xDE    ---------------------- */
/*                                  0xDF    ---------------------- */
#define USID_MOD_CTRL_L             0xE0 /* Left  Control    (MOD) */
#define USID_MOD_SHIFT_L            0xE1 /* Left  Shift      (MOD) */
#define USID_MOD_ALT_L              0xE2 /* Left  Alt        (MOD) */
#define USID_MOD_GUI_L              0xE3 /* Left  GUI        (MOD) */
#define USID_MOD_CTRL_R             0xE4 /* Right Control    (MOD) */
#define USID_MOD_SHIFT_R            0xE5 /* Right Shift      (MOD) */
#define USID_MOD_ALT_R              0xE6 /* Right Alt        (MOD) */
#define USID_MOD_GUI_R              0xE7 /* Right GUI        (MOD) */


#undef BLUETOOTH

#endif /* __KEYCODE_H__ */