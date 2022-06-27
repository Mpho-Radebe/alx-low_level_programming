#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates
 * @ptr: original pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new = malloc(new_size);
	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
		((char *)(new))[i] = ((char *)(ptr))[i];

	return (new);
}

