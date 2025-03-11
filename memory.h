//
// Lela Root 3/10/2025 Emulator project
// Header file for the memory device
// memCreate(int size), memReset(), memDump(int address, int count), memSet(int address, int count, int* values), memFree()
//

void memSet(int address, int count, int *values);

void memCreate(int size);

void memReset();

void memDump(int address, int count);\

void memFree();
