#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int left = (n - 1) / 2;
	int right = n / 2;

	while (left >= 0 && right < n)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		right++;
		left--;
	}
}
