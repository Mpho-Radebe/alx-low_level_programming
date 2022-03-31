#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: the number
 * Return: factorial of the given number
 */
int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
	
}
