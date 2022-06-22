#include "lists.h"

/**
 * print_recursive - prints a number
 * @n: the number
 */
void print_recursive(unsigned int n)
{
	if (n == 0)
		return;
	print_recursive(n / 10);
	_putchar('0' + n % 10);
}

/**
 * print_num - prints a number
 * @n: the number
 */
void print_num(unsigned int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_recursive(n);
}

/**
 * print_str - prints a string
 * @str: the string
 */
void print_str(char *str)
{
	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return;
	}

	while (*str != '\0')
		_putchar(*(str++));
}

/**
 * print_list - prints a list
 * @h: the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	_putchar('[');
	print_num(h->len);
	_putchar(']');

	_putchar(' ');
	print_str(h->str);
	_putchar('\n');

	return (1 + print_list(h->next));
}
