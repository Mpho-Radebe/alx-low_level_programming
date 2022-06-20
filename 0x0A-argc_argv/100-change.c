#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char **argv)
{
	int cents;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		count++;
	}

	printf("%d\n", count);
	
	return (0);
}

