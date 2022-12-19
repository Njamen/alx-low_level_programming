#include "main.h"
/* more headers goes there */

/**
 * _strlen - check is a randomly given number is positive or negativ
 * @s: given char
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	while (*(s + n) != '\0')
	{
		n = n + 1;
	}
	return (n);
}
