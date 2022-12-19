#include "main.h"
/* more headers goes there */

/**
 * _puts - check is a randomly given number is positive or negativ
 * @str: given char
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i = i + 1;
	}
	_putchar('\n');
}
