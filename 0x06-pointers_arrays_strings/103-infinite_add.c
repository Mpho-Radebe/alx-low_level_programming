#include <stdio.h>
#include <stdlib.h>

/**
 * count_digits - counts the number of digits in a number
 * @n: the number
 * Return: integer
 */
int count_digits(int n)
{
	int count = 0;

	if (n == 0)
		return (1);

	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

/**
 * infinite_add - adds
 * @n1: number 1
 * @n2: number 2
 * @r: buffer
 * @size_r: buffer size
 * Return: string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = atoi(n1) + atoi(n2);

	if (count_digits(sum) > size_r)
		return (0);
	sprintf(r, "%d", sum);
	return (r);
}
