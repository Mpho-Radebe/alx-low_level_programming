#include "main.h"

/**
 * clear_bit - sets bit at the given index
 * @n: the number
 * @index: the index
 * Return: 1 if worked or -1 otherwise 
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned int setter = (~0x00ul) << 1;

	if (n == 0)
		return (-1);

	for (i = 0; i < index; i++)
	{
		setter <<= 1;
		setter += 1;
	}

	*n &= setter;
	return (1);
}
