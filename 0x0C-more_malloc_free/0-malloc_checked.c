#include "main.h"
/* more headers goes there */

/**
 * malloc_checked- check is a randomly given number is positive or negative
 * @b: ...
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	char *space;

	space = (char *)malloc(b);
	return (space);
}
