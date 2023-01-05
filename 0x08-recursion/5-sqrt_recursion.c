#include "main.h"
/* more headers goes there */

/**
 * _sqrt_recursion - eheck is a randov
 * @n: given char
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_recursion(0, n));
}

/**
 * sqrt_recursion - dd
 * @r: w
 * @n: d
 *
 *
 * Return: 0
 */

int sqrt_recursion(int r, int n)
{
	if (r > n)
	{
		return (-1);
	}
	else if (r * r == n)
		return (r);
	else
		return (sqrt_recursion(r + 1, n));
}
