#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "parser.h"
#include "codegen.h"
#include "instructions.h"
#include "registers.h"
#include "memory.h"
#include "stack.h"

#define MAX_INSTRUCTIONS 1024
#define MAX_REGISTERS 16
#define MAX_MEMORY 1024

// Function to compile a file
void compile_file(const char* filename) {
    // Open the file
    FILE* file = fopen(filename, "r");
    if (!file) {
        printf("Error: Could not open file '%s'\n", filename);
        return;
    }

    // Initialize the parser
    parser_init(file);

    // Initialize the code generator
    codegen_init();

    // Parse instructions
    instruction_t instructions[MAX_INSTRUCTIONS];
    int num_instructions = 0;
    while (parser_has_more_instructions()) {
        instruction_t instruction;
        parser_parse_instruction(&instruction);
        instructions[num_instructions++] = instruction;
    }

    // Generate machine code
    codegen_generate_code(instructions, num_instructions);

    // Close the file
    fclose(file);
}

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    compile_file(argv[1]);
    return 0;
}