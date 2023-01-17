#include "dog.h"
#include <stdio.h>
/* more headers goes there */

/**
 * init_dog -  ...
 * @d: ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
