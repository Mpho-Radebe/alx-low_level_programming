#include <stdarg.h>
/**
 * sum_them_all - sums the numbers
 * @n: the number
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}

