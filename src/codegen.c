#include "lib/codegen.h"
#include "lib/instructions.h"

// Function to initialize the code generator
void codegen_init() {
    // Initialize the code buffer
    code_buffer = malloc(MAX_INSTRUCTIONS * sizeof(instruction_t));
}

// Function to generate machine code
void codegen_generate_code(instruction_t* instructions, int num_instructions) {
    for (int i = 0; i < num_instructions; i++) {
        instruction_t instruction = instructions[i];
        code_buffer[i] = instruction;
    }
}