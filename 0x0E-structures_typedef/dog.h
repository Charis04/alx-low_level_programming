#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A structure that contains info about a dog
 * @name: Name of dog
 * @age: Dog's age
 * @owner: Dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
