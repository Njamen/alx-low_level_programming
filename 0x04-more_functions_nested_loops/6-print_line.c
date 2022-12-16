#include "main.h"
/* more headers goes there */

/**
 * print_line -  check is a randomly given number is positive or negativ
 * @n: dddd
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
