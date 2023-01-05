#include "main.h"
/* more headers goes there */

/**
 * factorial   - eheck is a randov
 * @n: given char
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
