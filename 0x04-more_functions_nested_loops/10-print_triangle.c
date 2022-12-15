#include "main.h"
/* more headers goes there */

/**
 * print_triangle - check is a randomly given number is positive or negativ
 * @size: - ee
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (j = 1 ; j <= size ; j++)
	{
		for (i = 1 ; i <= (size - j) ; i++)
		{
			_putchar(' ');
		};
		for (i = 1 ; i <= j ; i++)
		{
			_putchar('#');
		};
		_putchar('\n');
	};
	if (size == 0)
	{
		_putchar('\n');
	}
}
