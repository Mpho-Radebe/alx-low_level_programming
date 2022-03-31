#include "main.h"

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: the number
 * Return: the square root of a number
 */
int _sqrt_recursion(int n)
{
	static int calls = 1;
	
	if (calls >= n)
		return (-1);
	else if (calls * calls == n)
		return calls;
	calls--;
	return _sqrt_recursion(n);
}
