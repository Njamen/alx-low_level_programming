#include "main.h"
/* more headers goes there */

/**
 * create_file - check is a randomly given number is positive or negativ
 * @filename: e
 * @text_content: d
 *
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int textfile;
	size_t r;

	if (filename == NULL)
		return (-1);
	textfile = open(filename, O_WRONLY | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
	if (textfile < 0)
	{
		textfile = open(filename, O_WRONLY | O_TRUNC);
		if (textfile < 0)
			return (-1);
	}
	if (text_content != NULL)
	{
		r = write(textfile, text_content, strlen(text_content));
		if (r != strlen(text_content))
			return (-1);
	}
	close(textfile);
	return (1);
}














