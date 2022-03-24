#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: a copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
