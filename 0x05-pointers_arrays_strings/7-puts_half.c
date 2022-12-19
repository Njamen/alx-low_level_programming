#include "main.h"
/* more headers goes there */

/**
 * puts_half - check is a randomly given number is positive or negativ
 * @str: given char
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int n = 0;

	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	while (*(str + n) != '\0')
	{
		n = n + 1;
	}
	if (n % 2 == 0)
	{
		n = n / 2;
	}
	else
	{
		n = (n + 1) / 2;
	}
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n = n + 1;
	}
	_putchar('\n');
}
