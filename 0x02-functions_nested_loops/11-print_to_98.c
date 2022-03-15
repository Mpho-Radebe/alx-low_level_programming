#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98 
 * @n: from n
 */
void print_to_98(int n)
{
	int increment = 0;
	int i, j, temp1, temp2;
	int numberDigits;

	if (n > 98)
		increment = -1;
	else
		increment = 1;

	for (i = n; i != 98; i += increment)
	{
		if (i == 0)
			numberDigits = 1;
		else
			numberDigits = 0;

		if (i < 0)
			temp1 = -i;
		else
			temp1 = i;
		/* reversing the digits in a number */
		temp2 = 0;
		while (temp1 != 0)
		{
			temp2 = temp2 * 10 + temp1 % 10;
			numberDigits++;
			temp1 /= 10;
		}

		if (i < 0)
			_putchar('-');
		/* printing the reversed digits */
		while (temp2 != 0)
		{
			numberDigits--;
			_putchar('0' + temp2 % 10);
			temp2 /= 10;
		}

		for (j = 0; j < numberDigits;j++)
			_putchar('0');

		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
