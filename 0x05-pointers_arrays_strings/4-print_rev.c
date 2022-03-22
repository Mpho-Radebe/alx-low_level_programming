#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*(s++) != '\0')
		len++;
	s--;

	for (i = 0; i < len; i++)
		putchar(*(--s));
	putchar('\n');
}
