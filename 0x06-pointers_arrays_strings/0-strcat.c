#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * _strcat - check is a randomly given number is positive or negativ
 * @dest: given char
 * @src: sdsssd
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	if (*src == '\0')
	{
		return (dest);
	}

	while (*(dest + i) != '\0')
	{
		i = i + 1;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		j = j + 1;
		i = i + 1;
	}
	*(dest + i) = '\0';
	return (dest);
}
