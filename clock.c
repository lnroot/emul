//
// Lela Root 3/10/2025 Emulator project
// C file for clock device
// clockReset(), clockDump(), clockTick(int inputTicks)
//

#include <stdio.h>
#include "clock.h"
//#include "cpu.h"

unsigned int ticks;

void clockReset() {
    ticks = 0;
}

void clockDump() {
    printf("clock: %d\n", ticks);
}

void clockTick(int inputTicks) {
    for (int i = 0; i < inputTicks; i++) {
        ticks++;
    }
}
