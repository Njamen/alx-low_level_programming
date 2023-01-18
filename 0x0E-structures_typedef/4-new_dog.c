#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * new_dog -  ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
