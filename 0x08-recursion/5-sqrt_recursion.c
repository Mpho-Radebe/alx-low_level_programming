#include "main.h"

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: the number
 * Return: the square root of a number
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 1)
		return (1);

	for (i = 0; i < n / 2; i++)
	{
		if (i * i == n)
			return (i);
	}

	return (-1);
}
