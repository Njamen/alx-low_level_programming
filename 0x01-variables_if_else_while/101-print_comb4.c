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
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				if (i < j && j < k)
				{
					if (i == 0 && j == 1 && k == 2)
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
