#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * init_dog - initializes a dog
 * @d: the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		fprintf(stderr, "Failed to initialize a dog.");
		return;
	}

	if (d->name != name)
	{
		d->name = malloc(strlen(name) + 1);
		if(d->name == NULL)
			return;
		strcpy(d->name, name);
	}

	d->age = age;

	if (d->owner != owner)
	{
		d->owner = malloc(strlen(owner) + 1);
		if (d->owner == NULL)
			return;
		strcpy(d->owner, owner);
	}
}
