#include "main.h"
#include <string.h>

/**
 * _strdup - allocates memory
 * @str: string
 * Return: a pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	return (strdup(str));
}
