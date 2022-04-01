#include "main.h"
#include <stdio.h>

/**
 * main - the main function
 * @argc: arguments count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char* argv[])
{
	if (argc < 0)
		puts("");
	puts(argv[0]);
	return (0);
}