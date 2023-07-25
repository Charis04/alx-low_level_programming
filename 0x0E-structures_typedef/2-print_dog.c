#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the contents of struct dog
 * @d: pointer to the struct to be printed
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
