#define COMBO(NAME, BINDINGS, KEYPOS, TIMEOUT) \
combo_##NAME { \
    timeout-ms = <TIMEOUT>; \
    bindings = <BINDINGS>; \
    key-positions = <KEYPOS>; \
};

/ {
    combos {
        compatible = "zmk,combos";
        COMBO(esc, &kp ESC, 13 16, 75)
        COMBO(caps, &caps_word, 10 19, 75)
        COMBO(capslock, &kp CAPSLOCK, 0 9, 75)

        // In the number cluster
        //COMBO(singlequote, &kp SINGLE_QUOTE, 6 7, 50)
        COMBO(singlequote, &squote_usi, 6 7, 50)
        //COMBO(doublequote, &kp DOUBLE_QUOTES, 7 8, 50)
        COMBO(doublequote, &dquote_usi, 7 8, 50)
        COMBO(minus, &kp MINUS, 17 18, 50)
        COMBO(plus, &kp PLUS, 16 17, 50)
        COMBO(equal, &kp EQUAL, 27 28, 50)
        COMBO(star, &kp ASTERISK, 26 27, 50)
        COMBO(underscore, &kp UNDERSCORE, 16 17 18, 50)
        COMBO(symlayertog, &tog 1, 32 33, 50)
    };
};
