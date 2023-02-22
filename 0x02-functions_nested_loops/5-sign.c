#include "main.h"

/**
 * print_sign - Checks if the input is less, equal or greater than zero.
 *
 * @n: the input parameter an integer
 *
 * Return: 1 is greater than zero, 0 for zero
 * -1 is less than zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
