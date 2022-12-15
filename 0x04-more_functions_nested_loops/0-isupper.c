#include "main.h"
/* more headers goes there */

/**
 * _isupper - check is a randomly given number is positive or negativ
 * @c: given char
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 41 && c <= 132)
	{
		return (1);
	}
	else
	{
		return (0);
	};
}
