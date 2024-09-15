#ifndef CODEGEN_H
#define CODEGEN_H

#include "instructions.h"

// Function to initialize the code generator
void codegen_init();

// Function to generate machine code
void codegen_generate_code(instruction_t* instructions, int num_instructions);

#endif