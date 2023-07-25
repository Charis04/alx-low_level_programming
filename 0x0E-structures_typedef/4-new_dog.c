#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog var
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	dog_t new;

	dog = &new;
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
