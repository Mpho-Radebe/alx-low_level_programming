#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int n;
	unsigned char *pf;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	pf = (unsigned char *) main;

	if (n > 0)
		printf("%02x", pf[0]);

	for (i = 1; i < n; i++)
		printf(" %02x", pf[i]);
	printf("\n");

	return (0);
}

