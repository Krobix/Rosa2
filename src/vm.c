#include <stdlib.h>
#include "vm.h"
#include "util.h"

/*Details on all functions will be in header file*/

rosa2_memory* rosa2_create_empty_mem() {
    return rosa2_safe_malloc(sizeof(rosa2_memory));
}

rosa2_vm_data* rosa2_create_vm(rosa2_memory* memory, rosa2_instruction* code) {
    rosa2_vm_data* vm = rosa2_safe_malloc(sizeof(rosa2_vm_data));
    vm->memory = memory;
    vm->code = code;
    return vm;
}