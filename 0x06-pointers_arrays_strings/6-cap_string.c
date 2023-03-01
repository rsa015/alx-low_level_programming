#include "main.h"
/**
 * cap_string - capitilize all words in an array of char.
 * @s: input string
 * Return: the pointer to s
 */

char *cap_string(char *s)
{
	int a = 0, b;
	int ommit_[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (*(s + a) >= 97 && *(s + a) <= 122)
		*(s + a) = *(s + a) - 32;
	a++;
	while (*(s + a) != '\0')
	{
		for (b = 0; b < 13; b++)
		{
			if (*(s + a) == ommit_[b])
			{
				if ((*(s + (a + 1)) >= 97) && (*(s + (a + 1)) <= 122))
					*(s + (a + 1)) = *(s + (a + 1)) - 32;
				break;
			}
		}
		a++;
	}
	return (s);
}
