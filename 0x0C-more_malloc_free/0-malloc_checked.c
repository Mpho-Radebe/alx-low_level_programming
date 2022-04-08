#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		fprintf(stderr, "Memory allocation failed");
		exit(8);
	}

	return (memory);
}
