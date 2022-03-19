#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of a triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
			_putchar(' ');
		for (j = size - 1 - i; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}