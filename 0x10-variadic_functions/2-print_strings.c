#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints numbers
 * @separator: seperator
 * @n: number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *tmp_str;

	va_start(ap, n);

	if (n >= 1)
	{
		tmp_str = va_arg(ap, char *);
		if (tmp_str == NULL)
			printf("(nil)");
		else
			printf("%s", tmp_str);
	}

	for (i = 1; i < n; i++)
	{
		tmp_str = va_arg(ap, char *);
		if (separator == NULL)
		{
			if (tmp_str == NULL)
				printf("(nil)");
			else
				printf("%s", tmp_str);
		}
		else
		{
			if (tmp_str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, tmp_str);
		}
	}
	printf("\n");
}
