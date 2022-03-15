#include "main.h"

/**
 * _islower - checks if a character is a lowercase alphabet
 * @c: character
 * Return: returns 1 if lowercase, and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
