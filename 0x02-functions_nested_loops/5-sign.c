#include "main.h"
/* more headers goes there */

/**
 * print_sign - check is a randomly given number is positive or negativ
 * @n: given char
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	};
}
