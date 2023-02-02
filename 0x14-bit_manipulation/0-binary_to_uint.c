#include "main.h"
/* more headers goes there */

/**
 * binary_to_uint - check is a randomly given number is positive or negativ
 * @b: given char
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, n;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] - '0' > 1)
			return (0);
		i = i + 1;
	}
	i = i - 1;
	j = 0;
	n = 0;
	while (i >= 0)
	{
		n = n + ((int)(b[i] - '0') * (1 << j));
		j = j + 1;
		i = i - 1;
	}
	return (n);
}
