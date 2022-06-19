#include <stdio.h>

int main(void)
{
	const long long N = 612852475143;
	long long num;
	long long largest = 1;

	for (num = 2; num < N; num++)
	{
		if (N % num == 0)
			largest = num;
	}

	printf("%lld", largest);

	return (0);
}

