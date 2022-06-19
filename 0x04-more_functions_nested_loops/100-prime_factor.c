#include <stdio.h>

int main(void)
{
	const unsigned long long N = 612852475143;
	unsigned long long num;
	unsigned long long largest = 1;

	for (num = 2; num < N; num++)
	{
		if (N % num == 0)
			largest = num;
	}

	printf("%lli", largest);

	return (0);
}

