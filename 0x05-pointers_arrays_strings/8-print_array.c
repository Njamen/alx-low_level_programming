#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_array - check is a randomly given number is positive or negativ
 * @a: given char
 * @n: ddd
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	else if (n < 0)
	{
		return;
	}
	while (i < (n - 1))
	{
		printf("%d, ", *(a + i));
		i = i + 1;
	}
	printf("%d\n", *(a + (n - 1)));
}
