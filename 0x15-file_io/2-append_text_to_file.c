#include "main.h"
/* more headers goes there */

/**
 * append_text_to_file - check is a randomly giveive ativ
 * @filename: e
 * @text_content: d
 *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int textfile;
	ssize_t r;

	if (filename == NULL)
		return (-1);
	textfile = open(filename, O_WRONLY | O_APPEND);
	if (textfile < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		r = write(textfile, text_content, sizeof(text_content));
		if (r != sizeof(text_content))
			return (-1);
	}
	close(textfile);
	return (1);
}

