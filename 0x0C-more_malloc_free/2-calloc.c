#include "main.h"
/* more headers goes there */

/**
 * _calloc -  ...
 * @nmemb: ...
 * @size: ...
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *rs;

	if (nmemb == 0 || size == 0)
		return (NULL);

	rs = malloc(size * nmemb);
	if (rs == NULL)
		return (NULL);
	bzero(rs, nmemb * size);
	return (rs);
}
