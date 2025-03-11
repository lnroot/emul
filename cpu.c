//
// Lela Root 3/10/2025 Emulator project
// C file for the CPU device
// cpuReset(), cpuDump(), cpuSet(char* reg, int val)
//

#include "cpu.h"

#include <stdio.h>

void cpuReset() {
    printf("cpuReset\n");
}

void cpuDump() {
    printf("cpuDump\n");
  }

void cpuSet(char* reg, int val) {
    printf("cpuSet reg %s %02X\n", reg, val);
}