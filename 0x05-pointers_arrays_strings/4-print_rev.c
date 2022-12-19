#include "main.h"
/* more headers goes there */

/**
 * print_rev - check is a randomly given number is positive or negativ
 * @s: given char
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i = i + 1;
	}
	i = i  - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i = i - 1;
	}
	_putchar('\n');
}
