#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: from n
 */
void print_to_98(int n)
{
	int increment = 0, numberDigits;
	int i, j, temp1, temp2;

	increment = 1;
	if (n > 98)
		increment = -1;
	for (i = n; i != 98; i += increment)
	{
		numberDigits = 0;
		if (i == 0)
			numberDigits = 1;
		temp1 = i;
		if (i < 0)
			temp1 = -i;
		temp2 = 0;
		while (temp1 != 0)
		{
			temp2 = temp2 * 10 + temp1 % 10;
			numberDigits++;
			temp1 /= 10;
		}
		if (i < 0)
			_putchar('-');
		while (temp2 != 0)
		{
			numberDigits--;
			_putchar('0' + temp2 % 10);
			temp2 /= 10;
		}
		for (j = 0; j < numberDigits; j++)
			_putchar('0');

		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
