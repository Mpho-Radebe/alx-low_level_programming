include <stdio.h>

/**
 * main - prints sizes of types 
 * Return: always returns 0
 */
int main(void)
{
	char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	while (*(message++) != '\0')
		putc(*message, stdout);
	
	return (0);
}
