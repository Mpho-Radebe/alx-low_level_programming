#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: a number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	int lastDigit = n % 10;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
