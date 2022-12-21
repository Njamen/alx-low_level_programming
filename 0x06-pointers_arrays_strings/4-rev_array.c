#include "main.h"
/* more headers goes there */

/**
 * reverse_array - check is a randomly given number is positive or negativ
 * @a: given char
 * @n: sss
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n;
	int c;

	if (n <= 0)
		return;
	j = j - 1;
	while (i <= j)
	{
		c = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = c;
		i = i + 1;
		j = j - 1;
	}
}
