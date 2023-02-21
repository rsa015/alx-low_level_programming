#include <unistd.h>
#include "main.h"

/**
 * _putchar: write the char to stdout
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
