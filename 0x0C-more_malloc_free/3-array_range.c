#include "main.h"
/* more headers goes there */

/**
 * array_range -  ...
 * @min: ...
 * @max: ...
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *rs;
	int n, i;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	rs = (int *)malloc(sizeof(int) * n);
	if (rs == NULL)
		return (NULL);
	i = min;
	while (i <= max)
	{
		*(rs + i) = i;
		i = i + 1;
	}
	return (rs);
}
