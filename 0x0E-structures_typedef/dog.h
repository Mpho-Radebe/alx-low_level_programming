#ifndef DOG_HEADER_H
#define DOG_HEADER_H

/**
 * struct dog - a dog struct
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Description: a dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif