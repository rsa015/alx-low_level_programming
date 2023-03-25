#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element.
 * @array: an array of integer.
 * @size: size of the array.
 * @action: pointer to a function
 * Return: no return value.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
