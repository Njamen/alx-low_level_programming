#include "main.h"
/* more headers goes there */

/**
 * more_numbers - check is a randomly given number is positive or negativ
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 1 ; j <= 10 ; j++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
			else
			{
				_putchar('0' + i);
			}
		}
		_putchar('\n');
	}
}
