#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes in the string accept.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or a NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
