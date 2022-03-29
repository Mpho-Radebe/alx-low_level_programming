#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string 1
 * @accept: string 2
 * Return: a number
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
