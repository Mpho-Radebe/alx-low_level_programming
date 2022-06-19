#include "main.h"


void print_num(int n);

/**
 * print_number - prints a number
 * @n: the number
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{	_putchar('-');
		n = n;
	}
	print_num(n);
}

/**
 * print_num - prints number
 * @n: the number
 */
void print_num(int n)
{
	if (n == 0)
		return;
	print_num(n / 10);
	_putchar('0' + n % 10);
}

