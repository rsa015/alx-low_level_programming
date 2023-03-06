#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: dstination memory area.
 * @src: source memory area
 * @n: bytes filled.
 * Return: the pointer to the dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
