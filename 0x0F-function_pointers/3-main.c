#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
/* more headers goes there */

/**
 * main -  ...
 * @argc: ...
 * @argv: .
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b;
	char *op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	f = get_op_func(op);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((op[0] == '/' || op[0] == '%') && (b == 0))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", ((*f)(a, b)));
	return (0);

}
