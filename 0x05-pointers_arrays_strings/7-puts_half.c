#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	size_t i;

	for (i = (strlen(str) + 1) / 2; i < strlen(str); i++)
		putchar(str[i]);
	putchar('\n');
}
