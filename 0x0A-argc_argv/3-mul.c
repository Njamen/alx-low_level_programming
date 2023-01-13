#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 * given as parameters
 * @argc: number of parameter
 * @argv: array of the two numbers to be mulpiplied
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int nombre1, nombre2;
	int result = 0;
	char *endPtr;
	char *endPtr2;
	int base = 10;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		nombre1 = strtol(argv[1], &endPtr, base);
		nombre2 = strtol(argv[2], &endPtr2, base);
		if (*endPtr || *endPtr2)
		{
			printf("Error\n");
			return (1);
		}
		result = nombre1 * nombre2;
		printf("%d\n", result);
		return (0);
	}
}
