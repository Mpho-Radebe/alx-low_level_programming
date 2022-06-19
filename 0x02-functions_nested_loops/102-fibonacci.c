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
	int i;

	printf("1");

	prev = 1;
	curr = 2;

	for (i = 1; i < 50; i++)
	{
		printf(", %ld", curr);
		temp = curr;
		curr = curr + prev;
		prev = temp;
	}
	printf("\n");

	return (0);
}

