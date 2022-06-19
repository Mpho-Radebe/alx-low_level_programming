#include <stdio.h>

/**
 * print_times_table - prints table
 * @n: size
 */
void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		putchar('0');
		for (j = 1; j <= n; j++)
		{
			putchar(',');
			printf("%3d", i * j);
		}
		putchar('\n');
	}
}

