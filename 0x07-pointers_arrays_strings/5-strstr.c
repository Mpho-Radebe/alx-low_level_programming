#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string1
 * @needle: string2
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
