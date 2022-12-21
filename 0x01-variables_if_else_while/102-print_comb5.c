#include <stdio.h>
/* more headers goes there */

/**
 * main - check is a randomly given number is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int j;
	int k;

	for (j = 0 ; j < 99 ; j++)
	{
		for (k = 0 ; k < 99 ; k++)
		{
			if (j < k)
			{
				if (j == 0 && k == 1)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));
				putchar(' ');
				putchar('0' + (k / 10));
				putchar('0' + (k % 10));

			}
		}
	}
	putchar('\n');

	return (0);
}
