#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name == NULL)
		puts("(nil)");
	else
		puts(d->name);

	printf("Age: %f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
		puts("(nil)");
	else
		puts(d->owner);
}
