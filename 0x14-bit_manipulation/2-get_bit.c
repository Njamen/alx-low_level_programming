#include "main.h"
/* more headers goes there */

/**
 * get_bit - check is a randomly given number is positive or negativ
 * @n: given char
 * @index: ddd
 *
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long kms = 1;
	unsigned int i = 0;


	if (n == 0)
	{
		return (0);
	}
	while (i != index)
	{
		if (kms >= n)
			return (-1);
		kms = kms << 1;
		i = i + 1;
	}
	if ((kms & n) == 0)
	{
		return (0);
	}
	else
		return (1);
}
