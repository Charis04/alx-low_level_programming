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
	int i, namelen = 0, ownerlen = 0;

	while (name[namelen])
		namelen++;
	
	while (owner[ownerlen])
		ownerlen++;
	
	d->name = malloc((namelen * sizeof(char)) + 1);
	d->owner = malloc(ownerlen * sizeof(char) + 1);

	for (i = 0; i < namelen; i++)
		d->name[i] = name[i];

	for (i = 0; i < ownerlen; i++)
		d->owner[i] = owner[i];

	d->name[namelen] = '\0';
	d->owner[ownerlen] = '\0';
	(*d).age = age;
}
