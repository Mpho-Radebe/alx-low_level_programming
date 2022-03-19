#include "main.h"

/**
 * _isdigit - checks if a character is a lowercase alphabet
 * @c: character
 * Return: returns 1 if lowercase, and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}