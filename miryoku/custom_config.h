#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_RAW   10

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(RAW,    "Raw")

#define MIRYOKU_LAYERMAPPING_RAW MIRYOKU_MAPPING
#define MIRYOKU_LAYER_RAW \
&kp LSHFT, &kp W,    &kp E,    &kp R,    &kp T,             &kp Y,         &kp U,           &kp I,         &kp O,    &kp LSHFT, \
&kp A,     &kp S,    &kp D,    &kp F,    &kp G,             &kp H,         &kp J,           &kp K,         &kp L,    &kp SQT,   \
&kp LCTRL, &kp X,    &kp C,    &kp V,    &kp B,             &kp N,         &kp M,           &kp COMMA,     &kp DOT,  &kp LCTRL, \
U_NP,      U_NP,     &kp ESC,  &kp SPACE,&lt U_MOUSE TAB,   &lt U_SYM RET, &lt U_NUM BSPC,  &lt U_FUN DEL, U_NP,     U_NP

#define MIRYOKU_LAYER_SYM \
&kp LBRC,  &kp AMPS, &kp ASTRK, &kp LPAR,  &kp RBRC,    U_NA, &u_to_U_BASE,  &u_to_U_EXTRA, &u_to_U_TAP, U_BOOT,   \
&kp COLON, &kp DLLR, &kp PRCNT, &kp CARET, &kp PLUS,    U_NA, &kp LSHFT,     &kp LCTRL,     &kp LALT,    &kp LGUI, \
&kp TILDE, &kp EXCL, &kp AT,    &kp HASH,  &kp PIPE,    U_NA, &tog U_RAW,    &u_to_U_MOUSE, &kp RALT,    U_NA,     \
U_NP,      U_NP,     &kp LPAR,  &kp RPAR,  &kp UNDER,   U_NA, U_NA,          U_NA,          U_NP,        U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,    &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE,  U_NA,         U_RDO,  U_PST,   U_CPY,   U_CUT,   U_UND,  \
&kp LGUI,  &kp LALT,    &kp LCTRL,     &kp LSHFT,     &tog U_RAW,   U_NU,   U_MS_L,  U_MS_D,  U_MS_U,  U_MS_R, \
U_NA,      &kp RALT,    &u_to_U_SYM,   &u_to_U_MOUSE, U_NA,         U_NU,   U_WH_L,  U_WH_D,  U_WH_U,  U_WH_R, \
U_NP,      U_NP,        U_NA,          U_NA,          U_NA,         U_BTN2, U_BTN1,  U_BTN3,  U_NP,    U_NP
