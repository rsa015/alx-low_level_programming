#include "main.h"

/**
 * prints_numbers - prints numbers between 0 to 9.
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}