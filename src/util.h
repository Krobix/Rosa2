#ifndef ROSA2_UTIL
#define ROSA2_UTIL
#include <stdlib.h>

/* do malloc() and check to see if it was successful. Error and exit if unsuccessful, otherwise return the pointer. */
void* rosa2_safe_malloc(size_t size);

void* rosa2_grow_array(size_t elem_size, size_t arr_size, void* ptr);

#endif