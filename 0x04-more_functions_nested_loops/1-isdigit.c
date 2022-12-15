#include "main.h"
/* more headers goes there */

/**
 * _isdigit - check is a randomly given number is positive or negativ
 * @c: given char
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	};
}
