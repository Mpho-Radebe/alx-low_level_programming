#include "lists.h"

void print_num(unsigned int n)
{
	if (n == 0)
		_putchar('0');

	while (n != 0)
	{
		_putchar('0' + n % 10);
		n /= 10;
	}
}


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
