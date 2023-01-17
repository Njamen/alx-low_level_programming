#ifndef _DOG_H_
#define _DOG_H_
/**
 *  struct dog - personal animal
 *  @name: -
 *  @age: -
 *  @owner: -
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
