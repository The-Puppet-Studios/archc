#include "lib/instructions.h"

// Function to get the opcode from a string
opcode_t get_opcode(const char* str) {
    if (strcmp(str, "NOP") == 0) return NOP;
    if (strcmp(str, "MOV") == 0) return MOV;
    if (strcmp(str, "ADD") == 0) return ADD;
    if (strcmp(str, "SUB") == 0) return SUB;
    if (strcmp(str, "MUL") == 0) return MUL;
    if (strcmp(str, "DIV") == 0) return DIV;
    if (strcmp(str, "AND") == 0) return AND;
    if (strcmp(str, "OR") == 0) return OR;
    if (strcmp(str, "XOR") == 0) return XOR;
    if (strcmp(str, "NOT") == 0) return NOT;
    if (strcmp(str, "SHL") == 0) return SHL;
    if (strcmp(str, "SHR") == 0) return SHR;
    if (strcmp(str, "LOAD") == 0) return LOAD;
    if (strcmp(str, "STORE") == 0) return STORE;
    if (strcmp(str, "PUSH") == 0) return PUSH;
    if (strcmp(str, "POP") == 0) return POP;
    if (strcmp(str, "JMP") == 0) return JMP;
    if (strcmp(str, "JZ") == 0) return JZ;
    if (strcmp(str, "JNZ") == 0) return JNZ;
    if (strcmp(str, "CALL") == 0) return CALL;
    if (strcmp(str, "RET") == 0) return RET;
    if (strcmp(str, "INT") == 0) return INT;
    if (strcmp(str, "IRET") == 0) return IRET;
    if (strcmp(str, "IN") == 0) return IN;
    if (strcmp(str, "OUT") == 0) return OUT;
    if (strcmp(str, "HALT") == 0) return HALT;
    return NOP;
}

// Function to get an operand from a string
int get_operand(const char* str) {
    if (isdigit(str[0])) {
        return atoi(str);
    } else {
        // Handle register names
        if (strcmp(str, "R0") == 0) return 0;
        if (strcmp(str, "R1") == 0) return 1;
        if (strcmp(str, "R2") == 0) return 2;
        if (strcmp(str, "R3") == 0) return 3;
        if (strcmp(str, "R4") == 0) return 4;
        if (strcmp(str, "R5") == 0) return 5;
        if (strcmp(str, "R6") == 0) return 6;
        if (strcmp(str, "R7") == 0) return 7;
        if (strcmp(str, "R8") == 0) return 8;
        if (strcmp(str, "R9") == 0) return 9;
        if (strcmp(str, "R10") == 0) return 10;
        if (strcmp(str, "R11") == 0) return 11;
        if (strcmp(str, "R12") == 0) return 12;
        if (strcmp(str, "R13") == 0) return 13;
        if (strcmp(str, "R14") == 0) return 14;
        if (strcmp(str, "R15") == 0) return 15;
        return 0;
    }
}