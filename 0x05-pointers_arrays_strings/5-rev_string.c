#include "main.h"
/* more headers goes there */

/**
 * rev_string - check is a randomly given number is positive or negativ
 * @s: given char
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char c;

	if (*(s + 0) == '\0')
		return;
	while (*(s + i) != '\0')
	{
		i = i + 1;
	}
	i = i  - 1;

	while (j <= i)
	{
		c = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		i = i - 1;
		j = j + 1;
	}
}
