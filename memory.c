//
// Created by Lela on 3/10/2025.
//

#include "memory.h"

#include <stdio.h>

void memCreate(int size) {
    printf("memCreate %02X\n", size);
}

void memReset() {
    printf("memReset\n");
}

void memDump(int address, int count) {
    printf("memDump %02X %02X\n", address, count);
}

void memSet(int address, int count, int *values) {
    printf("memSet %02X %02X\n", address, count);

    for (int i = 0; i < count; i++) {
        printf("%02X ", values[i]);
    }
    printf("\n");
}
