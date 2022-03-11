#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last time of random number
 * Return: returns 0 for successful execution
 */
int main(void)
{
	int first, second, third;

	for (first = '0'; first <= '8'; first++)
	{
		for (second = first + 1; second <= '9'; second++)
		{
			putchar(first);
			putchar(second);

			if (first < '8' || second < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
