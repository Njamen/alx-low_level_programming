#include "main.h"
/* more headers goes there */

/**
 *_pow_recursion - eheck is a randov
 * @x: given char
 * @y: ff
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
