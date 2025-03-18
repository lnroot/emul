//
// Lela Root 3/10/2025 Emulator project
// C file operating the memory device
// memCreate(int size), memReset(), memDump(int address, int count), memSet(int address, int count, int* values), memFree()
//

#include "memory.h"

#include <stdio.h>
#include <stdlib.h>

int *memptr;
int memSize;

void memCreate(int size) {
    memSize = size;
    memptr = (int*)malloc(size);
}

void memReset() {
    memptr = (int*)calloc(memSize, memSize);
}

void memDump(int address, int count) {
    for (int i = address; i < count; i++) {
        printf("%02X\n", memptr[i]);
    }
}

void memSet(int address, int count, int *values) {
    printf("memSet %02X %02X\n", address, count);

    for (int i = 0; i < count; i++) {
        printf("%02X ", values[i]);
    }
    printf("\n");
}

void memFree() {
    free(memptr);
}