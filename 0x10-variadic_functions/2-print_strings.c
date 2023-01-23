#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/* more headers goes there */

/**
 * print_numbers - check is a randomly given number is positive or negative
 * @separator: -
 * @n: -
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";

	va_start(ptr, n);
	for (i = 0 ; i < n - 1 ; i++)
	{
		printf("%d%s ", va_arg(ptr, int), separator);
	}
	printf("%d\n", va_arg(ptr, int));
	va_end(ptr);
}
