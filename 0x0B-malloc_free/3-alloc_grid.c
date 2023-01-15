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

	if (width <= 0 || height <= 0)
		return (NULL);
	str = (int **)malloc(sizeof(int) * width);
	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < width ; i++)
	{
		str[i] = (int *)malloc(sizeof(int) * height);
		if (str[i] == NULL)
			return (NULL);
		for (j = 0 ; j < height ; j++)
			str[i][j] = 0;

	}
	return (str);
}
