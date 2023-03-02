#include "main.h"

/**
 * string_toupper - transform lowercase string into uppercase
 * @s: string parameter
 *
 * Return: pointer to dest
 */

char *string_toupper(char *s)
{
	int i;
	i = 0;

	while(*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
			*(s + i) = *(s + i) - 32;
		i++;
	}

	return (s);
}
