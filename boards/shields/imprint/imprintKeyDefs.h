// TODO this whole file is basically wrong, keys 35/66 dont exist. experimenting with the #defines, they might or might not be right
/*                          CYBOARD IMPRINT KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────────────────────╮       ╭────────────────────────────────────╮
 │  0   1   2   3   4   5             │       │            36  37  38  39  40  41  │
 │  6   7   8   9  10  11             │       │            42  43  44  45  46  47  │
 │ 12  13  14  15  16  17             │       │            48  49  50  51  52  53  │
 │ 18  19  20  21  22  23             │       │            54  55  56  57  58  59  │
 │ 24  25  26  27  28  29             │       │            60  61  62  63  64  65  │
 │ 30  31  32  33  34  35             │       │            66  67  68  69  70  71  │
 ╰──────────────────────┬─────────────╯       ╰┬────────────┬──────────────────────╯
                        │ 72  73  74           │ 78  79  80 │     
                        │ 75  76  77           │ 81  82  83 │     
                        ╰─────────────         ╰────────────╯     

 ╭────────────────────────────────────╮       ╭────────────────────────────────────╮
 │ LC5 LC4 LC3 LC2 LC1 LC0            │       │            RC0 RC1 RC2 RC3 RC4 RC5 │
 │ LN5 LN4 LN3 LN2 LN1 LN0            │       │            RN0 RN1 RN2 RN3 RN4 RN5 │
 │ LT5 LT4 LT3 LT2 LT1 LT0            │       │            RT0 RT1 RT2 RT3 RT4 RT5 │
 │ LM5 LM4 LM3 LM2 LM1 LM0            │       │            RM0 RM1 RM2 RM3 RM4 RM5 │
 │ LB5 LB4 LB3 LB2 LB1 LB0            │       │            RB0 RB1 RB2 RB3 RB4 RB5 │
 │ LF5 LF4 LF3 LF2 LF1 LF0            │       │            RF0 RF1 RF2 RF3 RF4 RF5 │
 ╰──────────────────────┬─────────────╯       ╰─────────────┬──────────────────────╯
                        │ LH2 LH1 LH0          │ RH0 RH1 RH2 │
                        │ LH5 LH4 LH3          │ RH3 RH4 RH5 │
                        ╰─────────────         ╰────────────╯
 */
#pragma once

// Left ceiling row
#define LC0  5
#define LC1  4
#define LC2  3
#define LC3  2
#define LC4  1
#define LC5  0

// Right ceiling row
#define RC0 35
#define RC1 36
#define RC2 37
#define RC3 38
#define RC4 39
#define RC5 40

// Left number row
#define LN0 11
#define LN1 10
#define LN2  9
#define LN3  8
#define LN4  7
#define LN5  6

// Right number row
#define RN0 42
#define RN1 43
#define RN2 44
#define RN3 45
#define RN4 46
#define RN5 47

// Left top row
#define LT0 17
#define LT1 16
#define LT2 15
#define LT3 14
#define LT4 13
#define LT5 12

// Right top row
#define RT0 48
#define RT1 49
#define RT2 50
#define RT3 51
#define RT4 52
#define RT5 53

// Left middle row
#define LM0 23
#define LM1 22
#define LM2 21
#define LM3 20
#define LM4 19
#define LM5 18

// Right middle row
#define RM0 54
#define RM1 55
#define RM2 56
#define RM3 57
#define RM4 58
#define RM5 59

// Left bottom row
#define LB0 29
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25
#define LB5 24

// Right bottom row
#define RB0 60
#define RB1 61
#define RB2 62
#define RB3 63
#define RB4 64
#define RB5 65

// Left floor row
//#define LF0 35
#define LF1 34
#define LF2 33
#define LF3 32
#define LF4 31
#define LF5 30

// Right floor row
#define RF0 66
#define RF1 67
#define RF2 68
#define RF3 69
#define RF4 70
#define RF5 71

// Left thumb keys
#define LH0 74  // inner top
#define LH1 73  // middle top
#define LH2 72  // outer top
#define LH3 77  // inner bottom
#define LH4 76  // middle bottom
#define LH5 75  // outer bottom

// Right thumb keys
#define RH0 78  // inner top
#define RH1 79  // middle top
#define RH2 80  // outer top
#define RH3 81  // inner bottom
#define RH4 82  // middle bottom
#define RH5 83  // outer bottom

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
