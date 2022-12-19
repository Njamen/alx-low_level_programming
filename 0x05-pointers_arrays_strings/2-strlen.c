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

	while (*(s + ++n) != '\0');

	return (n);
}
