#include <stdio.h>

/**
 * print_times_table - prints table
 * @n: size
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		putchar('0');
		for (j = 1; j <= n; j++)
		{
			putchar(',');
			printf("%4d", i * j);
		}
		putchar('\n');
	}
}

