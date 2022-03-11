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

	for (first = '0'; first <= '7'; first++)
	{
		for (second = first + 1; second <= '8'; second++)
		{
			for (third = second + 1; third <= '9'; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first < '7' || second < '8' || third < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
