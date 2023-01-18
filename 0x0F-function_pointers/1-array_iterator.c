#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * array_iterator -  ...
 * @array: ...
 * @size: .
 * @action: ..
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
	{
		(*action)(array[i]);
	}
}
