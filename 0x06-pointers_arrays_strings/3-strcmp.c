#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * _strcmp - check is a randomly given number is positive or negativ
 * @s1: given char
 * @s2: sdsssd
 * @n: d
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	if (*src == '\0')
	{
		*(dest) = '\0';
		return (dest);
	}
	else if (n <= 0)
	{
		return (dest);
	}

	while ((*(src + j) != '\0') && (j < n))
	{
		*(dest + j) = *(src + j);
		j = j + 1;
	}
	if (*(src + j) == '\0')
	{
		*(dest + j) = '\0';
	}
	return (dest);
}
