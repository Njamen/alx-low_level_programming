#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/* more headers goes there */

/**
 * sum_them_all - check is a randomly given number is positive or negative
 * @n:
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(ptr, n);
	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
