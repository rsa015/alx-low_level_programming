#include "main.h"

/**
 * reverse_array - reverse interger array.
 * @a: array to reverse.
 * @n: number of elements.
 * Return: No Return.
 */
void reverse_array(int *a, int n)
{
	int x, tmp;

	for (x = 0; x < n--; x++)
	{
		tmp = a[x];
		a[x] = a[n];
		a[n] = tmp;
	}
}
