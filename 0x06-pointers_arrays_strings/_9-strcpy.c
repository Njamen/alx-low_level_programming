#include "main.h"
/* more headers goes there */

/**
 * _strcpy - check is a randomly given number is positive or negativ
 * @dest: given char
 * @src: sdsssd
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	if (*src == '\0')
	{
		*(dest + 0) = '\0';
		return (dest);
	}
	while (*(src + n) != '\0')
	{
		*(dest + n) = *(src + n);
		n = n + 1;
	}
	*(dest + n) = '\0';
	return (dest);
}
