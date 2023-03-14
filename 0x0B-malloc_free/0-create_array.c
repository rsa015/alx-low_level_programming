#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char.
 * @size: size of the created array.
 * @c: char parameter.
 * Return: a pointer to an array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
