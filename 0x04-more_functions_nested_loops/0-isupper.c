#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @ch: input character
 * Return: 1 if the input is uppercase, 0 otherwise.
 */
int _isupper(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
