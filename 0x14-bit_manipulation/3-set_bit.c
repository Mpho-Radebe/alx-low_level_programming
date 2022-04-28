#include <stddef.h>

/**
 * set_bit - sets bit at the given index
 * @n: the number
 * @index: the index
 * Return: 1 if worked or -1 otherwise 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;
	unsigned int setter = 0x01ul;

	if (index < 0 || n == NULL)
		return -1;

	for (i = 0; i < index; i++)
		setter <<= 1;

	*n |= setter;
	return 1;
}
