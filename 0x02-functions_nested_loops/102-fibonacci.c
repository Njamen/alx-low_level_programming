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
	long n_0 = 1;
	long n_1 = 2;
	int i = 3;
	long n;

	printf("%ld, ", n_0);
	printf("%ld", n_1);
	while (i <= 50)
	{
		n = n_0 + n_1;
		printf(", %ld", n);
		n_0 = n_1;
		n_1 = n;
		i = i + 1;
	}
	printf("\n");
	return (0);
}
