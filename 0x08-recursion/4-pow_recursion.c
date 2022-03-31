#include "main.h"

/**
 * _pow_recursion - calculates the power
 * @x: the base
 * @y: the exponent
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return 1;
	return x * _pow_recursion(x, y - 1);
}
