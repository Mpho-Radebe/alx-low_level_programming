#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - allocates a grid
 * @width: the width
 * @height: the height
 * Return: pointer of pointers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		fprintf(stderr, "failed allocation");
		return (NULL);
	}

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			fprintf(stderr, "failed allocation");
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
