#include <stdio.h>

/**
 * main - the main function
 * Return: always return 0
 */
int main(void)
{
	char *message1 = "and that piece of art is";
	char *message2 = " useful\" - Dora Korpar, 2015-10-19\n";

	while (*message1 != '\0')
		putc(*(message1++), stdout);
	
	while (*message2 != '\0')
		putc(*(message2++), stdout);		
	
	return (1);
}
