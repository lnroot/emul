//
// Lela Root 3/21/2025 Emulator project
// C file for the CPU device
// cpuReset(), cpuDump(), cpuSet(char* reg, int val)
//

#include "cpu.h"

#include <stdio.h>

struct CPU cpu;

/*
 *Resets the registers to 0
 */
void cpuReset() {
    cpu.PC = 0;
    for (int i = 0; i < 7; i++) {
        cpu.regs[i] = 0;
    }
}

/*
 *Prints the contents of all registers
 */
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
    printf("\n");
}

/*
 *Sets the value of the specified register
 *Input: String value for register, integer value to set
 */
void cpuSet(char *reg, int val) {
    if (reg[0] == 'P' && reg[1] == 'C') {
        cpu.PC = val;
    } else if (reg[0] == 'R') {
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
                printf("cpuSet: Unknown register\n");
                break;
        }
    } else {
        printf("cpuSet: Unknown register\n");
    }
}
