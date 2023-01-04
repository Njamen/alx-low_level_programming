#include "main.h"
/* more headers goes there */

/**
 * _print_rev_recursion   - check is a randov
 * @s: given char
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
