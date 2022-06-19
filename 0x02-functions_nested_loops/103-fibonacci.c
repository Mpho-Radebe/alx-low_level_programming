#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	long prev;
	long curr;
	long temp;
	long sum = 0;

	prev = 1;
	curr = 2;

	while (curr <= 4000000)
	{
		if (curr % 2 == 0)
			sum += curr;
		temp = curr;
		curr = curr + prev;
		prev = temp;
	}
	printf("%ld\n", sum);

	return (0);
}

