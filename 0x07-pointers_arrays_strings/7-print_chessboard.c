#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a : chessboard array container.
 * Return : void.
 */
void print_cchessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
