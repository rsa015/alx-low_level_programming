#include "main.h"

/**
 * _isalpha - alpha numeric character checker
 *
 * @c: The character in ASCII code
 *
 * Return: Return 1 for letter and 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
