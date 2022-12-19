#include "main.h"
/* more headers goes there */

/**
 * puts2 - check is a randomly given number is positive or negativ
 * @str: given char
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i = i + 1;
	}
	_putchar('\n');
}
