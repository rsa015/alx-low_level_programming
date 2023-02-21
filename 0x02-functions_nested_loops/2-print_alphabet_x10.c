#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case 10 times
 *
 * Return: void
 */
void print_alphabet_10x(void)
{
	int i, e;

	for (i = 0; i <= 9; i++)
	{
		for (e = 97; e <= 122; e++)
		{
			_putchar(e);
		}
	_putchar('\n');
	}
}
