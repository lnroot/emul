//
// Lela Root 3/21/2025 Emulator project
// C file operating the memory device
// memCreate(int size), memReset(), memDump(int address, int count), memSet(int address, int count, int* values), memFree()
//

#include "memory.h"

#include <stdio.h>
#include <stdlib.h>

int *memptr;
int memSize;

/*
 *Creates block of memory
 *Input: integer size of the memory block
 */
void memCreate(int size) {
    memSize = size;
    memptr = (int*)malloc(size);
}

/*
 *Resets the memory block to zeros
 */
void memReset() {
    memptr = (int*)calloc(memSize, memSize);
}

/*
 *Prints out the memory values in the range specified
 *Input: integer address for beginning of range, integer count for how many values to print
 */
void memDump(int address, int count) {
    for (int i = address; i < count; i++) {
        printf("%02X\n", memptr[i]);
    }
}

/*
 *Sets memory values in the range specified
 *Input: integer address for beginning of range, integer count for number of values, integer array of values to set
 */
void memSet(int address, int count, int *values) {
    for (int i = 0; i < count; i++) {
        memptr[address + i] = values[i];
    }
}

/*
 *Frees allocated memory, utilized at the end of main()
 */
void memFree() {
    free(memptr);
}