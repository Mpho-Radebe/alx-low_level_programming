#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isdigits - checks if a string consists only of digits
 * @str: the provided string
 * Return: 1 if the string all digits, and 0 otherwise
 */
int isdigits(char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}

	return (1);
}

/**
 * main - the main function
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!isdigits(argv[1]) || !isdigits(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

