//
// Created by Lela on 3/10/2025.
//

#include <stdio.h>
//#include <stdlib.h>
#include "clock.h"
//#include "cpu.h"

void clockReset() {
    printf("clockReset\n");
}

void clockDump() {
    printf("clockDump\n");
}

void clockTick(int inputTicks) {
    printf("clockTick %d\n", inputTicks);
}
