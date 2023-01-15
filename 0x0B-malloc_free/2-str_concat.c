#include "main.h"
/* more headers goes there */

/**
 * str_concat - a function
 * @s1: -
 * @s2: -
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int j, n, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = strlen(s1) + strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * n);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i = i + 1;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j = j + 1;
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}
