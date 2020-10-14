#include <stdlib.h>
#include "vm.h"
#include "util.h"

/*Details on all functions will be in header file*/

rosa2_memory* rosa2_create_empty_mem() {
    return rosa2_safe_malloc(sizeof(rosa2_memory));
}