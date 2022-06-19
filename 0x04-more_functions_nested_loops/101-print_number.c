#include "main.h"


void print_num(long n);

/**
 * print_number - prints a number
 * @n: the number
 */
void print_number(int n)
{
	long n_ = n;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n_ < 0)
	{	_putchar('-');
		n_ = -n_;
	}
	print_num(n_);
}

/**
 * print_num - prints number
 * @n: the number
 */
void print_num(long n)
{
	if (n == 0)
		return;
	print_num(n / 10);
	_putchar('0' + n % 10);
}

