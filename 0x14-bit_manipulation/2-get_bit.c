#include "main.h"

/**
 * recursive_print - prints the binary representation
 * @n: the number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index == 0)
		return 0x01ul & n;
	else if (index > 0)
		return get_bit(n >> 1, index - 1);
	else
		return -1;
}
