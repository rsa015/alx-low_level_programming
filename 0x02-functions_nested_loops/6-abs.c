#include "main.h"

/**
 * _abs - Computes the absolute value of integers.
 *
 * @i: input parameter to the function _abs
 *
 * Return: absolute value of i
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
