#include "math.h"

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: the number
 * Return: the square root of a number
 */
int _sqrt_recursion(int n)
{
	if (sqrt(n) == (int)sqrt(n))
		return sqrt(n);
	return -1;
}
