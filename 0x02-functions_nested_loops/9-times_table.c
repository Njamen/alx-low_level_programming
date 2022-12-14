#include "main.h"
/* more headers goes there */

/**
 * times_table - do ..
 *
 * Return: 0
 */
void times_table(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		int j;

		_putchar('0');
		for (j = 1 ; j < 10 ; j++)
		{
			int n = i * j;

			if (n < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + n);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
		};
		_putchar('\n');
	};
}
