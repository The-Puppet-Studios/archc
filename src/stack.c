#include "lib/stack.h"

// Stack buffer
int stack_buffer[MAX_MEMORY];
int stack_pointer = 0;

// Function to initialize the stack
void stack_init() {
    stack_pointer = 0;
}

// Function to push data onto the stack
void stack_push(int data) {
    stack_buffer[stack_pointer++] = data;
}

// Function to pop data from the stack
int stack_pop() {
    return stack_buffer[--stack_pointer];
}