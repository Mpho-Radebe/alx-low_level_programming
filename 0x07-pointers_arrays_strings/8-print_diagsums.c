#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < size; i++)
		sum += a[i * size + i];

	printf("%d, ", sum);

	sum = 0;
	for (i = 0, j = size - 1; i < size && j >= 0; i++, j--)
		sum += a[size * i + j];

	printf("%d\n", sum);
}
