#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/* more headers goes there */

/**
 * print_strings - check is a randomly given number is positive or negative
 * @separator: -
 * @n: -
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s;

	if (n == 0)
		return;

	va_start(ptr, n);
	for (i = 0 ; i < n - 1 ; i++)
	{
		s = va_arg(ptr, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL)
			printf("%s", separator);
	}
	s = va_arg(ptr, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s\n", s);
	va_end(ptr);
}
