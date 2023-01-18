#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * free_dog -  ...
 * @d: ...
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	free(d);
}
