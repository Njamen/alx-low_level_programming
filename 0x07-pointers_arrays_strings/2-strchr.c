#include <unistd.h>

/**
 * _strchr- writes the character c to stdout
 * @s: dd
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	int i = -1;

	do {
		i++;
		if (*(s + i) == c)
			return (s + i);

	} while (*(s + i) != '\0');
	return (NULL);
}
