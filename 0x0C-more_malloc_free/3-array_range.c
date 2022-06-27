#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array containing all the values from min to max
 * @min: min value in the array
 * @max: max value in the array
 * Return: the created array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	i = 0;
	while (i + min <= max)
	{
		array[i] = i + min;
		i++;
	}

	return (array);
}

