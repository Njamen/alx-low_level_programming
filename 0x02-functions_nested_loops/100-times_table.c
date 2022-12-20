#include "main.h"
/* more headers goes there */

/**
 * print_times_table - do ..
 * @n: ddd
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int i;

	if (n > 15 || n < 0)
		return;

	for (i = 0 ; i <= n ; i++)
	{
		int j;

		_putchar('0');
		for (j = 1 ; j <= n ; j++)
		{
			int n = i * j;

			if (n < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + n);
			}
			else if (n < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (n / 100));
				n = n - ((n / 100) * 100);
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
		};
		_putchar('\n');
	};
}
