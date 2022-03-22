#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: the string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
		if (*str == '\0')
			break;
		str++;
	}
	putchar('\n');
}
