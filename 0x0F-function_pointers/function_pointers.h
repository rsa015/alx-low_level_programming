#ifndef _FUNCTION_POINTER_
#define _FUNCTION_POINTER_

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif