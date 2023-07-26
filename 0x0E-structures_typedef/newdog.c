#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create a new dog var
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 * Return: pointer to new dog
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int _strlen(char *str)
{
	int len;

	while (str[len])
		len++;
	return (len);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int namelen, ownlen;

	if (name != NULL && owner != NULL)
	{
		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

		namelen = _strlen(name) + 1;
		printf("namelen is %i\n", namelen);
		ownlen = _strlen(owner) + 1;
		printf("ownlen is %i\n", ownlen);

		dog->name = malloc(sizeof(char) * namelen);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * ownlen);
		if (dog->owner == NULL)
		{
			free(dog);
			free(dog->name);
			return (NULL);
		}
		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;
	}
	return (dog);
}
