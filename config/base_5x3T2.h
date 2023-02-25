/*
 * Copyright (c) 2021 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/outputs.h>

#define APT 0
#define NUM 1
#define NAV 2
#define SYM 3
#define FUN 4
#define BTC 5

&lt {
    quick_tap_ms = <200>;
};

&caps_word {
    continue-list = <UNDERSCORE MINUS BSPC LSHFT RSHFT>;
};


/ {
    combos {
        compatible = "zmk,combos";
/* usually on base layer */
        combo_q {
            timeout-ms = <40>;
            key-positions = <1 2>;
            bindings = <&kp Q>;
        };
        combo_z {
            timeout-ms = <40>;
            key-positions = <21 22>;
            bindings = <&kp Z>;
        };
        combo_v {
            timeout-ms = <40>;
            key-positions = <22 23>;
            bindings = <&kp V>;
        };
        combo_slash {
            timeout-ms = <40>;
            key-positions = <27 28>;
            bindings = <&kp SLASH>;
        };
        combo_enter {
            timeout-ms = <40>;
            key-positions = <26 27>;
            bindings = <&kp ENTER>;
        };
/* parentheticals */
        combo_lbrc {
            timeout-ms = <40>;
            key-positions = <1 11>;
            bindings = <&kp LBRC>;
        };
        combo_lpar {
            timeout-ms = <40>;
            key-positions = <2 12>;
            bindings = <&kp LPAR>;
        };
        combo_lbkt {
            timeout-ms = <40>;
            key-positions = <3 13>;
            bindings = <&kp LBKT>;
        };
        combo_lt {
            timeout-ms = <40>;
            key-positions = <4 14>;
            bindings = <&kp LT>;
        };
        combo_rbrc {
            timeout-ms = <40>;
            key-positions = <8 18>;
            bindings = <&kp RBRC>;
        };
        combo_rpar {
            timeout-ms = <40>;
            key-positions = <7 17>;
            bindings = <&kp RPAR>;
        };
        combo_rbkt {
            timeout-ms = <40>;
            key-positions = <6 16>;
            bindings = <&kp RBKT>;
        };
        combo_gt {
            timeout-ms = <40>;
            key-positions = <5 15>;
            bindings = <&kp GT>;
        };
/* caps */
        combo_caps-word {
            timeout-ms = <40>;
            key-positions = <13 16>;
            bindings = <&caps_word>;
        };
        combo_capslock {
            timeout-ms = <40>;
            key-positions = <1 8>;
            bindings = <&kp CAPSLOCK>;
        };
/* deletion */
        combo_bspc {
            timeout-ms = <40>;
            key-positions = <16 17>;
            bindings = <&kp BSPC>;
        };
        combo_delword {
            timeout-ms = <40>;
            key-positions = <16 18>;
            bindings = <&kp LC(BSPC)>;
        };
    };
};

/ {
    behaviors {
        hl: homerow_mods_left {
            compatible = "zmk,behavior-hold-tap";
            label = "homerow mods left";
            #binding-cells = <2>;
            flavor = "tap-preferred";
            tapping-term-ms = <200>;
            quick-tap-ms = <100>;
            // global-quick-tap;
            bindings = <&kp>, <&kp>;
            // opposite side hand keys
            hold-trigger-key-positions = <5 6 7 8 9 15 16 17 18 19 25 26 27 28 29 32 33>;
        };

        hr: homerow_mods_right {
            compatible = "zmk,behavior-hold-tap";
            label = "homerow mods right";
            #binding-cells = <2>;
            flavor = "tap-preferred";
            tapping-term-ms = <200>;
            quick-tap-ms = <100>;
            // global-quick-tap;
            bindings = <&kp>, <&kp>;
            // opposite side hand keys
            hold-trigger-key-positions = <0 1 2 3 4 10 11 12 13 14 20 21 22 23 24 30 31>;
        };

        dotcol: dot_colon {
            compatible = "zmk,behavior-mod-morph";
            label = "DOT_COL";
            #binding-cells = <0>;
            bindings = <&kp DOT>, <&kp COLON>;
            mods = <(MOD_LSFT|MOD_RSFT)>;
        };
        comsem: comma_semicolon {
            compatible = "zmk,behavior-mod-morph";
            label = "COM_SEM";
            #binding-cells = <0>;
            bindings = <&kp COMMA>, <&kp SEMI>;
            mods = <(MOD_LSFT|MOD_RSFT)>;
        };
    };
};