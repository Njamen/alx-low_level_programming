#include "main.h"
/* more headers goes there */

/**
 * main - check is a randomly giveive ativ
 * @argc: e
 * @argv: d
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_to, file_from;
	int r_out, r_in;
	char *data;

	data = (char *) calloc(1024, sizeof(char));
	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_EXCL);
	if (file_to < 0)
	{
		file_to = open(argv[2], O_WRONLY | O_TRUNC);
		if (file_to < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	do {
		r_out = read(file_from, data, 1024);
		if (r_out < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		r_in = write(file_to, data, 1024);
		if (r_in < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]);
			return (99);
		}
	} while (r_out != 0);


	if (close(file_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				file_to);
		return (100);
	}

	if (close(file_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		return (100);
	}
	return (1);
}

