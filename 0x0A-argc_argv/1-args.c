#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: arguments count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argv != NULL)
		printf("%d\n", argc);
	return (0);
}
