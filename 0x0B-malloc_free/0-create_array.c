#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initialize
 * @size: size of the array
 * @c: initial
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *charPtr = (char*) malloc(size * sizeof(char));

	for (int i = 0; i < size; i++)
		charPtr[i] = c;
	return charPtr;
}
