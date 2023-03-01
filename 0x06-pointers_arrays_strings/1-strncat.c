#include "main.h"

/**
 * _strncat - append two string using the third int parameter.
 * @dest: function parameter of type str
 * @src: function parameter of type str
 * @n: function parameter of type int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
