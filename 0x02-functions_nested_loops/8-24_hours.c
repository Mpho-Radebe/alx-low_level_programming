
#include "main.h"

/**
 * jack_bauer - prints something about time
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour < 24)
	{
		/* print hour */
		_putchar('0' + hour / 10 % 10);
		_putchar('0' + hour % 10);

		_putchar(':');

		/* print minute */
		_putchar('0' + min / 10 % 10);
		_putchar('0' + min % 10);

		_putchar('\n');

		min++;

		if (min >= 60)
		{
			hour++;
			min = 0;
		}
	}
}
