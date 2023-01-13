#include "main.h"
/* more headers goes there */

/**
 * string_nconcat -  ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 *
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rs;
	unsigned int n1, n2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n1 = strlen(s1);
	n2 = strlen(s2);
	rs = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
	if (rs == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(rs + i) = s1[i];
		i = i + 1;
	}
	j = 0;
	while (j < n && s2[j] == '\0')
	{
		rs[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	rs[i] = '\0';
	return (rs);
}
