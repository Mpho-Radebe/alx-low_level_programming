#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src, int n)
{
	return (strcat(dest, src, n));
}