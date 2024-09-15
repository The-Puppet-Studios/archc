#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

// Enum to represent opcodes
typedef enum opcode {
    NOP,
    MOV,
    ADD,
    SUB,
    MUL,
    DIV,
    AND,
    OR,
    XOR,
    NOT,
    SHL,
    SHR,
    LOAD,
    STORE,
    PUSH,
    POP,
    JMP,
    JZ,
    JNZ,
    CALL,
    RET,
    INT,
    IRET,
    IN,
    OUT,
    HALT
} opcode_t;

// Structure to represent an instruction
typedef struct instruction {
    opcode_t opcode;
    int operand1;
    int operand2;
} instruction_t;

// Function to get the opcode from a string
opcode_t get_opcode(const char* str);

// Function to get an operand from a string
int get_operand(const char* str);

#endif