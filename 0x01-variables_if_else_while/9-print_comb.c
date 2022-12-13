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

	for (ch = '0' ; ch <= '8' ; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	};
	putchar('9');

	return (0);
}
