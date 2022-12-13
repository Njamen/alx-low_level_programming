#include "main.h"
/* more headers goes there */

/**
 * jack_bauer - do ..
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int i;

	for (i = 0 ; i < 3 ; i++)
	{
		int c;

		for (c = 0 ; c <= 9 ; c++)
		{
			int j;
			if (i == 2 && c >3)
				break;
			for (j = 0 ; j <= 5 ; j++)
			{
				int b;

				for (b = 0 ; b <= 9 ; b++)
				{
					_putchar('0' + i);
					_putchar('0' + c);
					_putchar(':');
					_putchar('0' + j);
					_putchar('0' + b);
					_putchar('\n');
				};
			};
			
		};
	};
}
