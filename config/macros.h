#define MACRO(NAME, BINDINGS, WAITTIME, TAPTIME) \
NAME: NAME { \
    compatible = "zmk,behavior-macro"; \
    #binding-cells = <0>; \
    wait-ms = <WAITTIME>; \
    tap-ms = <TAPTIME>; \
    bindings = <BINDINGS>; \
};
/ {
    macros {
        MACRO(squote_usi, &macro_tap &kp SINGLE_QUOTE &kp SPACE, 10, 10)
        MACRO(dquote_usi, &macro_tap &kp DOUBLE_QUOTES &kp SPACE, 10, 10)
        MACRO(caret_usi, &macro_tap &kp CARET &kp SPACE, 10, 10)
        MACRO(tilde_usi, &macro_tap &kp TILDE &kp SPACE, 10, 10)
        MACRO(grave_usi, &macro_tap &kp GRAVE &kp SPACE, 10, 10)
        MACRO(larrow, &macro_tap &kp LESS_THAN &kp MINUS, 10, 10)
        MACRO(rarrow, &macro_tap &kp MINUS &kp GREATER_THAN, 10, 10)
    };
};
