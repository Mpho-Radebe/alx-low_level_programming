#include <stdio.h>


/**
 * main - main
 * Return: 0
 */
int main(void)
{
	unsigned long long prev;
	unsigned long long curr;
	unsigned long long temp;
	int i;

	printf("1");

	prev = 1;
	curr = 2;

	for (i = 1; i < 98; i++)
	{
		printf(", %lli", curr);
		temp = curr;
		curr += prev;
		prev = temp;
	}
	printf("\n");

	return (0);
}

