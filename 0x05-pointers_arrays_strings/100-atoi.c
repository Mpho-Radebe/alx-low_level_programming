#include <stdlib.h>
#include <string.h>

/**
 * _atoi - converts a string to integer
 * @s: the string
 * Return: the number
 */
int _atoi(char *s)
{
	int positive = 1;

	if (strcmp("-2147483648", s) == 0)
		return -2147483648;

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
