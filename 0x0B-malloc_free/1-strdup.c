#include "main.h"
/* more headers goes there */

/**
 * _strdup - a function
 * @str: -
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *data;

	if (str == NULL)
		return (NULL);
	data = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	i = 0;
	while (str[i] != '\0')
	{
		data[i] = str[i];
		i = i + 1;
	}
	data[i] = '\0';
	return (data);
}
