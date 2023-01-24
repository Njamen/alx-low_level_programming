#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - printf function
 * @format: parameter 1
 * Return: number
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int b;

	if (format == NULL)
		return;

	va_start(args, format);
	while (format[i] != '\0')
	{
			b = 0;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 's':
					printf("%s", va_arg(args, char *));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				default:
					b = 1;
					break;
			}
			if (format[i + 1] != '\0' && b != 1)
				printf(", ");
			i++;
	}
	va_end(args);
	printf("\n");
}
