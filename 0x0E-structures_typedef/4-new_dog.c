#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner the dog
 * Return: a dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(struct dog));

	if (d->name != name)
	{
		d->name = malloc(strlen(name) + 1);
		strcpy(d->name, name);
	}

	d->age = age;

	if (d->owner != owner)
	{
		d->owner = malloc(strlen(owner) + 1);
		strcpy(d->owner, owner);
	}

	return (d);
}