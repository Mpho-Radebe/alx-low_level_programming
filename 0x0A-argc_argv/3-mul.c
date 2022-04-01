#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: arguments count
 * @argv: argument vector
 * Return: success - 0, or failure - 1
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		puts("Error");
		return (-1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
