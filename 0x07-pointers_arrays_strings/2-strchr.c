#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: sring
 * @c: character
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;

	if (*s == '\0' && c != '\0')
		return (NULL);
	return (s);
}