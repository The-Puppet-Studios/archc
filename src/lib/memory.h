#ifndef MEMORY_H
#define MEMORY_H

// Function to initialize memory
void memory_init();

// Function to load data from memory
int memory_load(int address);

// Function to store data in memory
void memory_store(int address, int data);

#endif