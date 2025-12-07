/*
 * CYBOARD IMPRINT (6-ROW) KEY MATRIX / LAYOUT MAPPING
 *
 * Visual representation of the layout with Key Position Indices (0-83).
 *
 * ╭────────────────────────────╮                       ╭────────────────────────────╮
 * │  0   1   2   3   4   5     │                       │    42  43  44  45  46  47  │
 * │ LC5 LC4 LC3 LC2 LC1 LC0    │                       │    RC0 RC1 RC2 RC3 RC4 RC5 │
 * │                            │                       │                            │
 * │  6   7   8   9  10  11     │                       │    48  49  50  51  52  53  │
 * │ LN5 LN4 LN3 LN2 LN1 LN0    │                       │    RN0 RN1 RN2 RN3 RN4 RN5 │
 * │                            │                       │                            │
 * │ 12  13  14  15  16  17     │                       │    54  55  56  57  58  59  │
 * │ LT5 LT4 LT3 LT2 LT1 LT0    │                       │    RT0 RT1 RT2 RT3 RT4 RT5 │
 * │                            │                       │                            │
 * │ 18  19  20  21  22  23     │                       │    60  61  62  63  64  65  │
 * │ LM5 LM4 LM3 LM2 LM1 LM0    │                       │    RM0 RM1 RM2 RM3 RM4 RM5 │
 * │                            │                       │                            │
 * │ 24  25  26  27  28  29     │                       │    66  67  68  69  70  71  │
 * │ LB5 LB4 LB3 LB2 LB1 LB0    │                       │    RB0 RB1 RB2 RB3 RB4 RB5 │
 * │                            │                       │                            │
 * │ 30  31  32  33  34  35     │                       │    72  73  74  75  76  77  │
 * │ LF5 LF4 LF3 LF2 LF1 LF0    ├─────╮             ╭───┤    RF0 RF1 RF2 RF3 RF4 RF5 │
 * ╰────────────────────┬───────╯     │             │   ╰─────────┬──────────────────╯
 *                      │ 36  37  38  │             │ 78  79  80  │
 *                      │ LH5 LH4 LH3 │             │ RH3 RH4 RH5 │
 *                      │             │             │             │
 *                      │ 39  40  41  │             │ 81  82  83  │
 *                      │ LH2 LH1 LH0 │             │ RH0 RH1 RH2 │
 *                      ╰─────────────╯             ╰─────────────╯
 */

#pragma once

/*
 * Convenience macro for defining layers with a cleaner visual structure.
 * Matches the layout above row-by-row.
 */

#define IMPRINT_LAYER( \
    l_ceil, l_num, l_top, l_mid, l_bot, l_floor, l_thumb_top, l_thumb_bot, \
    r_ceil, r_num, r_top, r_mid, r_bot, r_floor, r_thumb_top, r_thumb_bot  \
) \
    ZMK_LAYER(name, \
        l_ceil      r_ceil      \
        l_num       r_num       \
        l_top       r_top       \
        l_mid       r_mid       \
        l_bot       r_bot       \
        l_floor     r_floor     \
        l_thumb_top r_thumb_top \
        l_thumb_bot r_thumb_bot \
    )

// --- LEFT HAND ---

// Ceiling Row (Row 0)
#define LC5  0  // Pinky Outer
#define LC4  1  // Pinky
#define LC3  2  // Ring
#define LC2  3  // Middle
#define LC1  4  // Index
#define LC0  5  // Inner

// Number Row (Row 1)
#define LN5  6
#define LN4  7
#define LN3  8
#define LN2  9
#define LN1 10
#define LN0 11

// Top Row (Row 2 - QWERTY Row)
#define LT5 12
#define LT4 13
#define LT3 14
#define LT2 15
#define LT1 16
#define LT0 17

// Middle Row (Row 3 - Home Row)
#define LM5 18
#define LM4 19
#define LM3 20
#define LM2 21
#define LM1 22
#define LM0 23

// Bottom Row (Row 4 - ZXCV Row)
#define LB5 24
#define LB4 25
#define LB3 26
#define LB2 27
#define LB1 28
#define LB0 29

// Floor Row (Row 5 - Modifiers usually)
#define LF5 30
#define LF4 31
#define LF3 32
#define LF2 33
#define LF1 34
#define LF0 35

// Thumb Cluster
#define LH5 36  // Top Outer
#define LH4 37  // Top Middle
#define LH3 38  // Top Inner
#define LH2 39  // Bottom Outer
#define LH1 40  // Bottom Middle
#define LH0 41  // Bottom Inner

// Groups
#define KEYS_MAIN_L LC5 LC4 LC3 LC2 LC1 LC0 \
                    LN5 LN4 LN3 LN2 LN1 LN0 \
                    LT5 LT4 LT3 LT2 LT1 LT0 \
                    LM5 LM4 LM3 LM2 LM1 LM0 \
                    LB5 LB4 LB3 LB2 LB1 LB0 \
                    LF5 LF4 LF3 LF2 LF1 LF0

#define KEYS_THUMBS_L LH5 LH4 LH3 \
                      LH2 LH1 LH0

#define KEYS_ALL_L KEYS_MAIN_L KEYS_THUMBS_L

// --- RIGHT HAND ---

// Ceiling Row (Row 0)
#define RC0 42  // Inner
#define RC1 43  // Index
#define RC2 44  // Middle
#define RC3 45  // Ring
#define RC4 46  // Pinky
#define RC5 47  // Pinky Outer

// Number Row (Row 1)
#define RN0 48
#define RN1 49
#define RN2 50
#define RN3 51
#define RN4 52
#define RN5 53

// Top Row (Row 2 - QWERTY Row)
#define RT0 54
#define RT1 55
#define RT2 56
#define RT3 57
#define RT4 58
#define RT5 59

// Middle Row (Row 3 - Home Row)
#define RM0 60
#define RM1 61
#define RM2 62
#define RM3 63
#define RM4 64
#define RM5 65

// Bottom Row (Row 4 - ZXCV Row)
#define RB0 66
#define RB1 67
#define RB2 68
#define RB3 69
#define RB4 70
#define RB5 71

// Floor Row (Row 5)
#define RF0 72
#define RF1 73
#define RF2 74
#define RF3 75
#define RF4 76
#define RF5 77

// Thumb Cluster
#define RH3 78  // Top Inner
#define RH4 79  // Top Middle
#define RH5 80  // Top Outer
#define RH0 81  // Bottom Inner
#define RH1 82  // Bottom Middle
#define RH2 83  // Bottom Outer

// Groups
#define KEYS_MAIN_R RC0 RC1 RC2 RC3 RC4 RC5 \
                    RN0 RN1 RN2 RN3 RN4 RN5 \
                    RT0 RT1 RT2 RT3 RT4 RT5 \
                    RM0 RM1 RM2 RM3 RM4 RM5 \
                    RB0 RB1 RB2 RB3 RB4 RB5 \
                    RF0 RF1 RF2 RF3 RF4 RF5

#define KEYS_THUMBS_R RH3 RH4 RH5 \
                      RH0 RH1 RH2

#define KEYS_ALL_R KEYS_MAIN_R KEYS_THUMBS_R

#define KEYS_MAIN_ALL KEYS_MAIN_L KEYS_MAIN_R

#define KEYS_THUMBS_ALL KEYS_THUMBS_L KEYS_THUMBS_R

#define KEYS_ALL KEYS_MAIN_ALL KEYS_THUMBS_ALL
