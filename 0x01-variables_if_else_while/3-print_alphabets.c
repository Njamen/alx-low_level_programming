#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - check is a randomly given number is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	};
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	};
	putchar('\n');

	return (0);
}
