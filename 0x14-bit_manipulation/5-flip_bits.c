/**
 * flip_bits - returns the number of bits you would flip
 * @n: the number 1
 * @m: the number 2
 * Return: the number of bits you would flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numberOfBits = 0;

	while (n != m)
	{
		if ((n & 0x01) != (m & 0x01))
			numberOfBits++;
		n >>= 1;
		m >>= 1;
	}

	return (numberOfBits);
}
