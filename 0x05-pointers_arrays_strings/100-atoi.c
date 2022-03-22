#include <stdlib.h>

/**
 * _atoi - converts a string to integer
 * @s: the string
 * Return: the number
 */
int _atoi(char *s)
{
	int positive = 1;

	while (*s != '\0' && !(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
			positive = !positive;
		s++;
	}
	
	if (positive)
		return (atoi(s));
	else
		return (-atoi(s));
}
