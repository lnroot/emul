//
// Created by Lela on 3/10/2025.
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