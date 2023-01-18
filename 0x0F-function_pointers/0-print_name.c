#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * print_name -  ...
 * @name: ...
 * @f: .
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
