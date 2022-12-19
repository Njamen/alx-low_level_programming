#include "main.h"
/* more headers goes there */

/**
 * swap_int - check is a randomly given number is positive or negativ
 * @a: given char
 * @b: ddd
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
