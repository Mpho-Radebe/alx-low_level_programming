#include <stddef.h>

/**
 * binary_to_uint - converts a number to an integer
 * @b: a string of bits
 * Returns: the number
 */
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int result = 0;
	int nextDigit = 1;

	if (b == NULL)
		return 0;

	for (index = 0; b[index] != '\0'; index++)
	{	
		if (b[index] != '0' && b[index] != '1')
			return 0;

		if (b[index] == '1')
			result += nextDigit;
		nextDigit *= 2;
	}

	return result;
}
