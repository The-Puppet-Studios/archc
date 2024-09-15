#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>
#include "instructions.h"

// Structure to represent a parser
typedef struct parser {
    FILE* file;
    char line[1024];
} parser_t;

// Function to initialize the parser
void parser_init(FILE* file);

// Function to check if there are more instructions
int parser_has_more_instructions();

// Function to parse an instruction
void parser_parse_instruction(instruction_t* instruction);

#endif