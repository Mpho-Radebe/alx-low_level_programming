#include <stdio.h>

/**
 * main - the Fizz-Buzz program
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 5 != 0 && i % 3 != 0)
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}

	putchar('\n');

	return (0);
}