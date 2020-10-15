#ifndef ROSA2_OPCODES
#define ROSA2_OPCODES

typedef enum {
    NOOP = 0,
    ADD, //add two ints
    SUB, //subtract two ints
    MUL, //multiply two ints
    DIV, //divide two ints
    STRSTORE, //push a string to the stack
    INTSTORE, //push an int to the stack
    FLSTORE, //push a floating point number to the stack
    DICTDEF, //define a variable dictionary entry
    STDOUT, //put in stdout
    STDIN, //grab from stdin, put in string return register
    STRLOAD, //load a string to return register
    INTLOAD, //load an int to return register
    FLLOAD, //load a floating point number to the return register
    DICTLOAD, //load specified dictionary entry to the return register
    STRADD, //add two strings together and put them in return register
    FLADD, //add two floating point numbers together and add them to return register
    HALT, //halts the vm. crazy, i know
    MOV //move value from one register to another
} rosa2_opcode;

#endif