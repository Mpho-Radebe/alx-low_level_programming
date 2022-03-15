#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: a number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;
	long longN = n;

	if (longN < 0)
		longN = -longN;
	lastDigit = longN % 10;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
