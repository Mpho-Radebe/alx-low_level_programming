#include "main.h"

/**
 * recursive_print - prints the binary representation
 * @n: the number
 */
void recursive_print(unsigned long int n)
{
	if (n != 0)
	{
		recursive_print (n >> 1);
		_putchar('0' + (0x01ul & n));
	}
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the number 
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	recursive_print(n);
}