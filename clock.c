//
// Lela Root 3/21/2025 Emulator project
// C file for clock device
// clockReset(), clockDump(), clockTick(int inputTicks)
//

#include <stdio.h>
#include "clock.h"
#include "cpu.h"

unsigned int ticks;

/*
 *Sets tick count to 0
 */
void clockReset() {
    ticks = 0;
}

/*
 *Prints out tick count
 */
void clockDump() {
    printf("clock: %d\n", ticks);
}

/*
 *Sets the number of clock ticks
 *Input: integer value of clock ticks
 */
void clockTick(int inputTicks) {
    for (int i = 0; i < inputTicks; i++) {
        ticks++;
    }
}
