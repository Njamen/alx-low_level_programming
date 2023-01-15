#include "main.h"
/* more headers goes there */

/**
 * alloc_grid - a function
 * @width: -
 * @height: -
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int j, i;
	int **str;
	int n, p;

	if (width <= 0 || height <= 0)
		return (NULL);
	n = height;
	p = width;
	str = (int **)malloc(sizeof(int **) * n);
	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < n ; i++)
	{
		str[i] = (int *)malloc(sizeof(int *) * p);
		if (str[i] == NULL)
		{
			free(str);
			return (NULL);
		}
		for (j = 0 ; j < p ; j++)
			str[i][j] = 0;

	}
	return (str);
}
