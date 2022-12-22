#include "main.h"
/* more headers goes there */

/**
 * string_toupper - check is a randomly given number is positive or negativ
 * @a: given char
 * @n: sss
 *
 * Return: 0
 */

char *string_toupper(char *a)
{
	int i = 0;
	char c;

	if (*(a + i) == '\0')
		return a;
	while (*(a + i) != '\0')
	{
		c = *(a + i);
		if (c >= 97 && c <= 122)
		{
			c = c - 32;
			*(a + i) = c;
		}
		i = i + 1;
	}
	return (a);
}
