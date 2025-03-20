//
// Lela Root 3/10/2025 Emulator project
// C file for the CPU device
// cpuReset(), cpuDump(), cpuSet(char* reg, int val)
//

#include "cpu.h"

#include <stdio.h>

struct CPU cpu;

void cpuReset() {
    cpu.PC = 0;
    for (int i = 0; i < 7; i++) {
        cpu.regs[i] = 0;
    }
}

void cpuDump() {
    printf("PC:%u\n", cpu.PC);
    printf("RA:%u\n", cpu.regs[0]);
    printf("RB:%u\n", cpu.regs[1]);
    printf("RC:%u\n", cpu.regs[2]);
    printf("RD:%u\n", cpu.regs[3]);
    printf("RE:%u\n", cpu.regs[4]);
    printf("RF:%u\n", cpu.regs[5]);
    printf("RG:%u\n", cpu.regs[6]);
    printf("RH:%u\n", cpu.regs[7]);
  }

void cpuSet(char* reg, int val) {
    printf("cpuSet reg %s %02X\n", reg, val);

    if (reg[0] == 'P' ) {
        cpu.PC = val;
    } else {
        switch (reg[1]) {
            case 'A':
                cpu.regs[0] = val;
                break;
            case 'B':
                cpu.regs[1] = val;
                break;
            case 'C':
                cpu.regs[2] = val;
                break;
            case 'D':
                cpu.regs[3] = val;
                break;
            case 'E':
                cpu.regs[4] = val;
                break;
            case 'F':
                cpu.regs[5] = val;
                break;
            case 'G':
                cpu.regs[6] = val;
                break;
            case 'H':
                cpu.regs[7] = val;
                break;
            default:
                printf("cpuSet: Unknown register");
                break;
        }
    }
}