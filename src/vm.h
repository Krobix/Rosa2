#ifndef ROSA2_VM
#define ROSA2_VM
#include <stdint.h>

/* self explanatory */
typedef enum {
    INT = 0,
    STR,
    FLOAT
} rosa2_type;

/* represents a dictionary entry (named variable) */
typedef struct {
    /* variable name */
    char* name;
    /* variable type */
    rosa2_type type;
    /* variable address */
    int address;
} rosa2_dict_entry;

/* rosa2_memory represents all of the memory that the vm will hold */
typedef struct {
    /* Integer registers (size is always 64 bit)*/
    int64_t ireg0;
    int64_t ireg1;
    int64_t ireg2;
    int64_t ireg3;
    int64_t ireg4;

    /* String registers */
    char* sreg0;
    char* sreg1;
    char* sreg2;
    char* sreg3;
    char* sreg4;

    /* Floating point registers */
    double flreg0;
    double flreg1;
    double flreg2;
    double flreg3;
    double flreg4;

    /* return registers */
    int64_t irreg;
    char* srreg;
    double flrreg;
    
} rosa2_memory;

#endif