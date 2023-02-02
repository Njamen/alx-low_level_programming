#include "main.h"
/* more headers goes there */

/**
 * flip_bits - check is a randomly given number is positive or negativ
 * @n: given char
 *
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int kms = 0x8000000000000000;
	int tm = 0;

	n = n ^ m;
	if (n == 0)
		return (0);

	while (kms > 0)
	{
		if ((kms & n) != 0)
			tm = tm + 1;
		kms = kms >> 1;
	}
	return (tm);
}
