#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	const unsigned long N = 612852475143lu / 2;
	unsigned long num;
	unsigned long largest = 1;

	for (num = 2; num <= N; num++)
	{
		if (N % num == 0)
			largest = num;
	}

	printf("%li", largest);

	return (0);
}

