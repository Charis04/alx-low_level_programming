#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a var of type struct dog
 * @d: var to be initialized
 * @name: value for name member of d
 * @age: value for age member of d
 * @owner: value for owner member of d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
