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

	i = 0;
	 
	aa:
		if (i * i == n)
			return (i);
		i++;
		if (i >= n / 2)
			goto aa;

	return (-1);
}
