#include "main.h"

/**
 * _isdigit - Check if the a given argument is a digit.
 * @ch: input parameter.
 * Return: 1 to indicate success and 0 otherwise.
 */
int _isdigit(int ch)
{
	if (ch >= 48 && ch <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
