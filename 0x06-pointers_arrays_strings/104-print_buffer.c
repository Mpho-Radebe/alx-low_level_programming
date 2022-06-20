#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	i = 1;
	while (i < size)
	{
		if ((i - 1) % 10 == 0)
		{
			printf("%08x: ", i - 1);
		}

		printf("%02x", b[i - 1]);
		i++;
		if (i < size)
		{
			printf("%02x ", b[i - 1]);
			i++;
		}

		if ((i - 1) % 10 == 0 || i == size)
		{
			for (j = i - ((i - 2) % 10) - 1; j < i; j++)
			{
				if (isprint(b[j - 1]))
					putchar(b[j - 1]);
				else
					putchar('.');
			}
			putchar('\n');
		}

	}
}

