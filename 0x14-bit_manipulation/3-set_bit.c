#include "main.h"
/* more headers goes there */

/**
 * set_bit - check is a randomly given number is positive or negativ
 * @n: given char
 * @index: ddd
 *
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int kms = 1;
	unsigned int i = 0;

	for (i = 0 ; i < index ; i++)
		kms = kms << 1L;
	if (kms > *n)
		return (-1);
	*n = kms | *n;
	return (1);
}

