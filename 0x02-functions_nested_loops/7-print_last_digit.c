#include "main.h"
/* more headers goes there */

/**
 * print_last_digit - check is a randomly given number is positive or negativ
 * @n: given char
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_digit = (n % 10);

	_putchar(last_digit);
	return (last_digit);
}
