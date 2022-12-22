#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * _strncpy - check is a randomly given number is positive or negativ
 * @dest: given char
 * @src: sdsssd
 * @n: d
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	if (*src == '\0')
	{
/*		*(dest) = '\0';  */
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
	else
	{
		while (j < n)
		{
			*(dest + j) = '\0';
			j = j + 1;
		}
	}
	return (dest);
}
