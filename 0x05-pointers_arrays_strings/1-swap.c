#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @a: first pointer parameter
 * @b: second pointer parameter
 * Retur: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
