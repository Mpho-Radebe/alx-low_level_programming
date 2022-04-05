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

	if (charPtr == NULL)
	{
		fprintf(stderr, "Not enough memory left!\n");
		return (1);
	}

	for (i = 0; i < size; i++)
		charPtr[i] = c;
	return (charPtr);
}
