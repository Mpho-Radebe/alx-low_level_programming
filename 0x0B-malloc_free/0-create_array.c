#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array and initialize
 * @size: size of the array
 * @c: initial
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *charPtr = malloc(size * sizeof(char));

	if (size <= 0)
	{
		puts("failed to allocate memory");
		exit(1);
	}

	if (charPtr == NULL)
	{
		fprintf(stderr, "Not enough memory left!\n");
		exit(1);
	}

	for (i = 0; i < size; i++)
		charPtr[i] = c;
	return (charPtr);
}
