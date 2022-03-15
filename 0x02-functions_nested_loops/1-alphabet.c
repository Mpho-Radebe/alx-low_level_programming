#include "main.h"
/**
 * print_alphabet - prints alphabets 
 */
void print_alphabet(void){
	for (char ch = 'a'; ch <= 'z'; ch++) 
		_putchar(*ch);
	char newLine = '\n';
	_putchar(newLine);
}
