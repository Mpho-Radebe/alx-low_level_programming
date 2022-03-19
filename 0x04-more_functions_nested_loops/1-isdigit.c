#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: a character
 * Return: returns 1 if c is a digit, and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}