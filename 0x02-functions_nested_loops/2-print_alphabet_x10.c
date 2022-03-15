#include "main.h"

/**
 * print_alphabet - prints alphabets
 */
void print_alphabet_x10(void)
{
	char ch;
	char newLine;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
