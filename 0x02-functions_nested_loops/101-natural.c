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
	int sum = 0;
	int i = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		i = i + 1;
	}
	printf("%d\n", sum);
	return (0);
}
