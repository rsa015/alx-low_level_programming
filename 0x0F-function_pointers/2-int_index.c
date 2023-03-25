#include "function_pointers.h"
/**
 * int_index - search for an integer and return index.
 * @array: array to be searched.
 * @size: size of the array
 * @cmp: function pointer.
 *
 * Return: index.
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
