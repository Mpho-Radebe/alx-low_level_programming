#include "main.h"

/**
 * isPrime - checks prime
 * @n: number 1
 * @m: number 2
 * Return: prime
 */
int isPrime(int n, int m)
{
	if (n <= 1)
		return (0);
	if (((n + 0.0) / m) <= 2.0)
		return (1);
	else if (n % m == 0)
		return (0);
	else
		return (isPrime(n, m + 1));
}

/**
 * is_prime_number - if number is prime
 * @n: the number
 * Return: something
 */
 int is_prime_number(int n)
 {
	return (isPrime(n, 2));
 }
