#include "main.h"
/* more headers goes there */

/**
 * print_diagonal - check is a randomly given number is positive or negativ
 * @n: dddd
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (j = 0 ; j < n ; j++)
	{
		for (i = 0 ; i <= j - 1 ; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
