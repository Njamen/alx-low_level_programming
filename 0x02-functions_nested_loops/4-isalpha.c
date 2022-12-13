#include "main.h"
/* more headers goes there */

/**
 * _isalpha - check is a randomly given number is positive or negativ
 * @c: given char
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	};
}
