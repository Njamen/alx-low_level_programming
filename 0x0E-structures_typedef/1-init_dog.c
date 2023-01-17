#include "dog.h"
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
