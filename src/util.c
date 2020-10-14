#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

void* rosa2_safe_malloc(size_t size){
    void* addr = malloc(size);
    if (addr == NULL) {
        printf("ROSA2: Error: malloc() failed, exiting");
        exit(1);
    }
    return addr;
}

void* rosa2_grow_array(size_t elem_size, size_t arr_size, void* ptr){
    void* new_arr = realloc(ptr, elem_size+arr_size);
    if(new_arr == NULL){
        printf("ROSA2: Error: realloc() failed, exiting");
        exit(1);
    }
    return new_arr;
}