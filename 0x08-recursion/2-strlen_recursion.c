#include "main.h"
/* more headers goes there */

/**
 * _strlen_recursion   - eheck is a randov
 * @s: given char
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
