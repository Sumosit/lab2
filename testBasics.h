#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int conditional(int x, int y, int z) {
    return (x & y) | (~x & z);
}
int bitMask(int high, int low) {
    uint8_t high_bit = (uint8_t) high;
    uint8_t low_bit = (uint8_t) low;
    printf("Bit mask: %02X\n", (high_bit & low_bit));
}
int bitParity(int x) {
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    x &= 1;
    printf("Bit parity: %02X\n", (unsigned char)x);
}
int dividePower2(int x, int n) {
    printf("Divide Power 2: %02X\n", (x + ((x >> 31) & ((1 << n) + ~0))) >> n);
}
