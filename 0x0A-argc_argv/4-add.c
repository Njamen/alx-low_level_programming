#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that adds positive numbers
 * given as parameters
 * @argc: number of parameter
 * @argv: array of numbers to be added
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int nombre, i;
	int base = 10;
	int sum = 0;
	char *endPtr;

	if (argc < 1)
		printf("0\n");
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			nombre = strtol(argv[i], &endPtr, base);
			if (endPtr == NULL)
			{
				printf("Error\n");
				return (0);
			}
			sum = sum + nombre;
		}
		printf("%d\n", sum);
	}
	return (0);
}
