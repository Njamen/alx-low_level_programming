#include "main.h"
/* more headers goes there */

/**
 * read_textfile - check is a randomly given number is positive or negativ
 * @filename: e
 * @letters: d
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int textfile;
	char *data;
	ssize_t r, r_w;

	data = (char *) calloc(letters, sizeof(char));
	if (filename == NULL)
		return (0);
	textfile = open(filename, O_RDONLY);
	if (textfile < 0)
		return (0);
	r = read(textfile, data, letters);
	if (r < 0)
		return (0);
	r_w = write(STDOUT_FILENO, data, r);
	close(textfile);
	free(data);
	if (r_w != r)
		return (0);
	return (r_w);

}

