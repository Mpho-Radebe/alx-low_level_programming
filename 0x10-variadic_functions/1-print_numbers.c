#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: seperator
 * @n: number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (n >= 1)
		printf("%d", va_arg(ap, int));

	for (i = 1; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	}
	printf("\n");
}
