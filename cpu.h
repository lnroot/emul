//
// Lela Root 3/10/2025 Emulator project
// Header file for the CPU device
// cpuReset(), cpuDump(), cpuSet(char* reg, int val)
//

#include <stdint.h>

struct CPU {
    uint8_t regs[8];
    uint8_t PC;
};

void cpuReset();

void cpuDump();

void cpuSet(char* reg, int val);