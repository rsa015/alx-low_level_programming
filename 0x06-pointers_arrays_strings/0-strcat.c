#include <stdio.h>;
#include "main.h"

/**
 * _strcat - add two string together.
 * @dest: the dstination string
 * @src: the source string
 * Return: the pointer to the dest string.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b >= 0)
	{
		*(dest + a) = *(src + b);

		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
