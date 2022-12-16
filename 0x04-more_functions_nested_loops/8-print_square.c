#include "main.h"
/* more headers goes there */

/**
 * print_square - check is a randomly given number is positive or negativ
 * @n: dddd
 *
 * Return: 0
 */
void print_square(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
