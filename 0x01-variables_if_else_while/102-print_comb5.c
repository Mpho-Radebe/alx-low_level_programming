#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last time of random number
 * Return: returns 0 for successful execution
 */
int main(void)
{
	int num1, num2, temp;
	int d11, d12, d21, d22;


	for (num1 = 0; num1 <= 98; num1++)
	{
		temp = num1;
		d12 = temp % 10;
		temp /= 10;
		d11  = temp % 10;

		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			temp = num2;
			d22 = temp % 10;
			temp /= 10;
			d21  = temp % 10;

			putchar('0' + d11);
			putchar('0' + d12);

			putchar(' ');

			putchar('0' + d21);
			putchar('0' + d22);

			if (num1 < 98 || num2 < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
