#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * main - check is a randomly given number is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	float n_0 = 1;
	float n_1 = 2;
	int i = 3;
	float n;

	printf("%.0f, ", n_0);
	printf("%.0f", n_1);
	while (i <= 98)
	{
		n = n_0 + n_1;
		printf(", %ld", (unsigned long)n);
		n_0 = n_1;
		n_1 = n;
		i = i + 1;
	}
	printf("\n");
	return (0);
}
