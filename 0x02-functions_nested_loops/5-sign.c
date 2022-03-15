#include "main.h"

/**
 * _print_sign - prints sign of a number
 * @n: a number
 * Return: returns 1, -1 or 0
 */
int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
