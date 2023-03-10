#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed by the src,
 * including te terminating null byte, to te buffer
 * pointed to by dest
 * @dest: destination buffer
 * @src: source buffer
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
