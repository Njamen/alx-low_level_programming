#include <stdio.h>
/* more headers goes there */

/**
 * main - check is a randomly given number is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (i < j)
			{
				if (i != 0 || j != 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + i);
				putchar('0' + j);
			}
		}
	}
	putchar('\n');

	return (0);
}
