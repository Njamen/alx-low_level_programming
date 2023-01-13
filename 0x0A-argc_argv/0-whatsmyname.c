#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: number of parameter
 * @argv: all commands line parameters
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int n = argc - argc;

	printf("%s\n", argv[n]);
	return (0);
}
