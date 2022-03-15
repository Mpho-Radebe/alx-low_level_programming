#include "main.h"
/**
 * print_alphabet - prints alphabets 
 */
void print_alphabet(void)
{
	char ch;
	char newLine;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	newLine = '\n';
	_putchar(newLine);
}
