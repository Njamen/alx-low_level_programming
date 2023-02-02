#include "main.h"
/* more headers goes there */

/**
 * print_binary - check is a randomly given number is positive or negativ
 * @n: given char
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long kms = 0x8000000000000000;
	int tm = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (kms > 0)
	{
		if ((kms & n) == 0)
			if (tm != 0)
				_putchar('0');
			else
			{
			}
		else
		{
			_putchar('1');
			tm = 1;
		}
		kms = kms >> 1;
	}
}
