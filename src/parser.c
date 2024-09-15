#include "lib/parser.h"
#include "lib/instructions.h"

// Function to initialize the parser
void parser_init(FILE* file) {
    parser_t* parser = malloc(sizeof(parser_t));
    parser->file = file;
}

// Function to check if there are more instructions
int parser_has_more_instructions() {
    parser_t* parser = get_parser();
    return fgets(parser->line, 1024, parser->file) != NULL;
}

// Function to parse an instruction
void parser_parse_instruction(instruction_t* instruction) {
    parser_t* parser = get_parser();
    char* token = strtok(parser->line, " ");
    instruction->opcode = get_opcode(token);
    token = strtok(NULL, " ");
    instruction->operand1 = get_operand(token);
    token = strtok(NULL, " ");
    instruction->operand2 = get_operand(token);
}