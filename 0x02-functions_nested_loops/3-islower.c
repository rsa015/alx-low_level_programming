#include "main.h"

/**
 * _islower - Checks if the params is a lower case value.
 *
 * @c: The charater in ASCII code
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
