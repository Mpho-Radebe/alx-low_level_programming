#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: the byte
 * @n: number of bytes
 */
char *_memset (char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
