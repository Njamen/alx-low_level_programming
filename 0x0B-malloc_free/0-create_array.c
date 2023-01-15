#include "main.h"
/* more headers goes there */

/**
 * create_array - a function
 * @size: -
 * @c: -
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *data;

	if (size == 0)
		return (NULL);
	data = (char *)malloc(sizeof(char) * size);
	if (data == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		data[i] = c;
	return (data);
}
