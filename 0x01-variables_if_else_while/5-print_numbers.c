#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last time of random number
 * Return: returns 0 for successful execution
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		if (c != 'q' && c != 'e')
			putchar(c);

	putchar('\n');

	return (0);
}
