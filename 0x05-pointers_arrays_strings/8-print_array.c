#include "main.h"
#include <stdio.h>

/**
 * print_array - prints numbers in the array
 * @a: the array
 * @n: the number
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		putchar('\n');

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
		else
			putchar('\n');
	}
}
