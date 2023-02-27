#include <unistd.c>
#include "main.h"

/**
 * _putchar - writes the charater c to stdout.
 * @c: the input character c.
 * Return: On success 1; error otherwise (-1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
