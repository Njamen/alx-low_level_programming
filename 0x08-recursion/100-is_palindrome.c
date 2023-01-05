#include "main.h"
/* more headers goes there */

/**
 * is_palindrome - eheck is a randov
 * @s: given char
 *
 * Return: 0
 */

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	else
		return (palindrome(s, (s + n - 1)));
}

/**
 * palindrome - dd
 * @s: f
 * @e :e
 *
 * Return: 0
 */

int palindrome(char *s, char *e)
{
	if (s > e)
		return (1);
	else if (*s == *e)
		return (palindrome(s + 1, e - 1));
	else
		return (0);
}

/**
 * _strlen_recursion - g
 * @s: t
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
