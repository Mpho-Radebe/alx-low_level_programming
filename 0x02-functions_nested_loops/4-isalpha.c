#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: character
 * Return: returns 1 if alphabet, and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
