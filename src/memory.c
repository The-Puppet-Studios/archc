#include "lib/memory.h"

// Memory buffer
int memory_buffer[MAX_MEMORY];

// Function to initialize memory
void memory_init() {
    for (int i = 0; i < MAX_MEMORY; i++) {
        memory_buffer[i] = 0;
    }
}

// Function to load data from memory
int memory_load(int address) {
    return memory_buffer[address];
}

// Function to store data in memory
void memory_store(int address, int data) {
    memory_buffer[address] = data;
}