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
	int i;

	if (argv == NULL)
		return (1);

	for (i = 0; i < argc; i++)
		puts(argv[i]);

	return (0);
}
