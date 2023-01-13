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
	argv[0] = "";
	printf("%d\n", argc);
	return (0);
}
