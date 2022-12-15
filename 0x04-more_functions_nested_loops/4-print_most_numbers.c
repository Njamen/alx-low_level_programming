#include "main.h"
/* more headers goes there */

/**
 * print_most_numbers - check is a randomly given number is positive or negativ
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	};
	_putchar('\n');

}
