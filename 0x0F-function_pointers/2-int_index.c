#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * int_index -  ...
 * @array: ...
 * @size: .
 * @cmp: ..
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
