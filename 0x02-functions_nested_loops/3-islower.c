#include "main.h"
/* more headers goes there */

/**
 * _islower - check is a randomly given number is positive or negativ
 * @c: given char
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	};
}
