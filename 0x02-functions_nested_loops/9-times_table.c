#include "main.h"

/**
 * times_table - prints something about time
 */
void times_table(void)
{
	int i, j;
	int dig1, dig2, dig3;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j <= 9; j++)
		{
			dig1 = i * j / 100 % 10;
			dig2 = i * j / 10 % 10;
			dig3 = i * j % 10;

			if (dig1 == 0)
				_putchar(' ');
			else
				_putchar('0' + dig1);

			if (dig2 == 0)
				_putchar(' ');
			else
				_putchar('0' + dig2);

			_putchar('0' + dig3);

			if (j == 9)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
