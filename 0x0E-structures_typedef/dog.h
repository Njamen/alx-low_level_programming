#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - typedef of
 */
typedef struct dog dog_t;
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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
