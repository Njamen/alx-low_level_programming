#include "main.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - do ..
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		int ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		};
		_putchar('\n');
	};
}
