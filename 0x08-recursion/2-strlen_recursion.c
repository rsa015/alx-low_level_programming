#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s = '\0')
		return (0);
	else
		return (1 + _strlenn_recursion(s + 1));
}
