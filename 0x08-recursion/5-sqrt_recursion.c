#include "main.h"

/**
 * sqrt_fun - returns square root of a number
 * @n: the number1
 * @m: the number2
 * Return: the square root
 */ 
int sqrt_fun(int n, int m)
{
	if (m >= n / 2)
		return (-1);
	else if (m * m == n)
		return (m);
	else
		return (sqrt_fun(n, m + 1));
}

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: the number
 * Return: the square root of a number
 */ 
int _sqrt_recursion(int n)
{
	return (sqrt_fun(n, 1));
}
