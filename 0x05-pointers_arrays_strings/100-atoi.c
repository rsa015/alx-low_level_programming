#include "main.h"

/**
 * _atoi - converts str to int.
 * @s: input string
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = -, oi = 0, pn = 1, m = 1, i;

	while (*(s + coun) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
