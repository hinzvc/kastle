#ifndef GL_A_H_
#define GL_A_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define GL_A_NUM_CELLS 300
#define GL_A_SAMPLERATE 16384
 
const char __attribute__((section(".progmem.data"))) GL_A_DATA [] = {1, 3, 0, 3,
0, 7, 4, 18, 13, -3, 0, -9, -5, -6, -6, -3, -5, 1, -3, 5, -1, 14, 53, -7, -23,
4, -25, 0, -17, -2, -9, -3, -2, -5, 50, 22, 81, -8, -7, 13, -33, 8, -23, -1,
-13, -5, -4, -9, 37, 19, 17, 38, -3, 15, 4, -11, -7, -10, -6, -10, -2, -11, 18,
19, 9, 15, -15, 37, 17, 0, 18, -21, 3, -15, -6, -16, -2, 7, -5, -5, -21, -5,
-15, 25, -2, -5, 0, -30, -5, -25, -5, -3, -1, -9, -14, -9, -8, -7, -1, 30, -6,
8, -6, -21, 2, -4, -2, -8, -13, -8, -7, -8, -1, -7, 13, 28, -5, 12, 9, -5, 3,
-9, -12, -9, -7, -10, 0, -11, 8, -13, 34, 6, 52, 46, -33, 17, -30, -3, -15, -9,
-8, -9, -4, -5, -1, 1, 3, 51, 20, -43, 8, -30, -7, -16, -13, -8, -14, 0, -17,
30, 36, 77, 10, -17, 6, -31, -7, -20, -16, -11, -17, -5, -18, 12, 34, -1, 42,
-1, 1, 11, -25, -7, -21, -10, -18, -8, -16, 0, 27, 1, 18, -18, 16, 26, -15, 18,
-28, -6, -16, -13, -12, -9, 23, 0, 10, -15, -2, -5, 22, 16, -5, 10, -26, -3,
-17, -9, 10, 3, 2, -11, -7, -4, -4, -1, 32, 4, 5, 1, -23, -1, 1, 2, -3, -10,
-12, -3, -10, 0, -5, 8, 32, -2, 11, -6, 4, 6, -11, -7, -19, -2, -17, 1, -13, 6,
-11, 23, 22, 8, 77, -34, 10, -16, -27, 0, -30, 3, -25, 5, -21, 12, -21, 49, 73,
9, 43, -45, -9, -18, -27, -8, -25, -5, -20, -3, -14, 3, 46, 55, 40, -16, -10,
-22, -23, -16, -26, -14, -21, -11, -15, -7, };
const char* sampleTable = GL_A_DATA;
const uint16_t sampleLength = GL_A_NUM_CELLS;
#endif /* GL_A_H_ */