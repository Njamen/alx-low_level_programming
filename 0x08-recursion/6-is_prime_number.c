#include "main.h"
/* more headers goes there */

/**
 *is_prime_number - eheck is a randov
 * @n: given char
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0 || n == 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime_number(2, n));
	}
}

/**
 * prime_number - dd
 * @i: e
 * @n: w
 *
 * Return: 0
 */

int prime_number(int i, int n)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i != 0)
		return (prime_number(i + 1, n));
	else
		return (0);
}
