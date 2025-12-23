/*                          CYBOARD IMPRINT KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────────────────────╮       ╭────────────────────────────────────╮
 │  0   1   2   3   4   5             │       │              6   7   8   9  10  11 │
 │ 12  13  14  15  16  17             │       │             18  19  20  21  22  23 │
 │ 24  25  26  27  28  29             │       │             30  31  32  33  34  35 │
 │ 36  37  38  39  40  41             │       │             42  43  44  45  46  47 │
 │ 48  49  50  51  52  53             │       │             54  55  56  57  58  59 │
 │ 60  61  62  63  64                 │       │                 65  66  67  68  69 │
 ╰───────────────────────┬────────────╯       ╰────────────┬───────────────────────╯
                         │ 70  71  72           76  77  78 │       
                         │ 73  74  75           79  80  81 │       
                         ╰─────────────       ─────────────╯

 ╭────────────────────────────────────╮       ╭────────────────────────────────────╮
 │ LC5 LC4 LC3 LC2 LC1 LC0            │       │            RC0 RC1 RC2 RC3 RC4 RC5 │
 │ LN5 LN4 LN3 LN2 LN1 LN0            │       │            RN0 RN1 RN2 RN3 RN4 RN5 │
 │ LT5 LT4 LT3 LT2 LT1 LT0            │       │            RT0 RT1 RT2 RT3 RT4 RT5 │
 │ LM5 LM4 LM3 LM2 LM1 LM0            │       │            RM0 RM1 RM2 RM3 RM4 RM5 │
 │ LB5 LB4 LB3 LB2 LB1 LB0            │       │            RB0 RB1 RB2 RB3 RB4 RB5 │
 │ LF5 LF4 LF3 LF2 LF1                │       │                RF1 RF2 RF3 RF4 RF5 │
 ╰──────────────────────┬─────────────╯       ╰─────────────┬──────────────────────╯
                        │ LH2 LH1 LH0                 RH0 RH1 RH2 │
                        │ LH5 LH4 LH3                 RH3 RH4 RH5 │
                        ╰─────────────                ─────────────╯
 */
#pragma once

/*
 * Convenience macro allowing for layer definitions in a key arrangement like
 * the above key matrix.
 *
 * Note that this file needs to be sourced *after* helper.h so that ZMK_LAYER is
 * already defined.
 */
#define IMPRINT_LAYER(name, row0, row1, row2, row3, row4, row5, thumb_row_0, thumb_row_1) \
  ZMK_LAYER(name, row0 row1 row2 row3 row4 row5 thumb_row_0 thumb_row_1)

// Left ceiling row
#define LC0  5
#define LC1  4
#define LC2  3
#define LC3  2
#define LC4  1
#define LC5  0

// Right ceiling row
#define RC0  6
#define RC1  7
#define RC2  8
#define RC3  9
#define RC4 10
#define RC5 11

// Left number row
#define LN0 17
#define LN1 16
#define LN2 15
#define LN3 14
#define LN4 13
#define LN5 12

// Right number row
#define RN0 18
#define RN1 19
#define RN2 20
#define RN3 21
#define RN4 22
#define RN5 23

// Left top row
#define LT0 29
#define LT1 28
#define LT2 27
#define LT3 26
#define LT4 25
#define LT5 24

// Right top row
#define RT0 30
#define RT1 31
#define RT2 32
#define RT3 33
#define RT4 34
#define RT5 35

// Left middle row
#define LM0 41
#define LM1 40
#define LM2 39
#define LM3 38
#define LM4 37
#define LM5 36

// Right middle row
#define RM0 42
#define RM1 43
#define RM2 44
#define RM3 45
#define RM4 46
#define RM5 47

// Left bottom row
#define LB0 53
#define LB1 52
#define LB2 51
#define LB3 50
#define LB4 49
#define LB5 48

// Right bottom row
#define RB0 54
#define RB1 55
#define RB2 56
#define RB3 57
#define RB4 58
#define RB5 59

// Left floor row (no LF0 - innermost key doesn't exist)
#define LF1 64
#define LF2 63
#define LF3 62
#define LF4 61
#define LF5 60

// Right floor row (no RF0 - innermost key doesn't exist)
#define RF1 65
#define RF2 66
#define RF3 67
#define RF4 68
#define RF5 69

// Left thumb keys
#define LH0 72  // inner top
#define LH1 71  // middle top
#define LH2 70  // outer top
#define LH3 75  // inner bottom
#define LH4 74  // middle bottom
#define LH5 73  // outer bottom

// Right thumb keys
#define RH0 76  // inner top
#define RH1 77  // middle top
#define RH2 78  // outer top
#define RH3 79  // inner bottom
#define RH4 80  // middle bottom
#define RH5 81  // outer bottom

// Groups
#define KEYS_MAIN_L LC5 LC4 LC3 LC2 LC1     \
                    LN5 LN4 LN3 LN2 LN1 LN0 \
                    LT5 LT4 LT3 LT2 LT1 LT0 \
                    LM5 LM4 LM3 LM2 LM1 LM0 \
                    LB5 LB4 LB3 LB2 LB1 LB0 \
                    LF5 LF4 LF3 LF2 LF1

#define KEYS_THUMBS_L LH5 LH4 LH3 \
                      LH2 LH1 LH0

#define KEYS_ALL_L KEYS_MAIN_L KEYS_THUMBS_L

#define KEYS_MAIN_R RC1 RC2 RC3 RC4 RC5 \
                    RN0 RN1 RN2 RN3 RN4 RN5 \
                    RT0 RT1 RT2 RT3 RT4 RT5 \
                    RM0 RM1 RM2 RM3 RM4 RM5 \
                    RB0 RB1 RB2 RB3 RB4 RB5 \
                    RF1 RF2 RF3 RF4 RF5

#define KEYS_THUMBS_R RH3 RH4 RH5 \
                      RH0 RH1 RH2

#define KEYS_ALL_R KEYS_MAIN_R KEYS_THUMBS_R

#define KEYS_MAIN_ALL KEYS_MAIN_L KEYS_MAIN_R

#define KEYS_THUMBS_ALL KEYS_THUMBS_L KEYS_THUMBS_R

#define KEYS_ALL KEYS_MAIN_ALL KEYS_THUMBS_ALL
