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
	long n = n_1;
	long sum = 2;

	while (n <= 4000000)
	{
		n = n_0 + n_1;
		if ((n % 2) == 0)
		{
			sum = sum + n;
		}
		n_0 = n_1;
		n_1 = n;
	}
	printf("%ld\n", sum);
	return (0);
}
