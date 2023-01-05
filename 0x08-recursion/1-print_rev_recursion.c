#include "main.h"
/* more headers goes there */

/**
 * _print_rev_recursion   - eheck is a randov
 * @s: given char
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
