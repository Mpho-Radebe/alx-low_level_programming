#include <stdio.h>

/**
 * main - the main function
 * Return: always return 0
 */
int main(void)
{
	char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	while (*(message++) != '\0')
		putc(*message, stdout);
	
	return (0);
}
