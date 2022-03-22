#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string 
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);
	char reverseStr[len + 1];

	reverseStr[len] = '\0';

	i = 0;
	while (*s != '\0' && i < len)
		reverseStr[i++] = *(s++)

	puts(reverseStr);
}
