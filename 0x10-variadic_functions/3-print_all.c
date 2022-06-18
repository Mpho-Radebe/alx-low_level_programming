#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints numbers
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *tmp_str;
	char *nil;
	char *withnil = "%s%s";
	int i = 0;
	int first = 1;

	va_start(ap, format);
	
	while (format != NULL && format[i] != '\0' && first == 1)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				first = 0;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				first = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				first = 0;
				break;
			case 's':
			{
				first = 0;
				tmp_str = va_arg(ap, char *);
				withnil = "%s%s";
				nil = "";
				if (tmp_str == NULL)
				{
					withnil = "%s";
					nil = "(nil)";
				}
				printf(withnil, nil, tmp_str);
			}
		}
		i++;
	}

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf(", %c", va_arg(ap, int));
				break;
			case 'i':
				printf(", %d", va_arg(ap, int));
				break;
			case 'f':
				printf(", %f", va_arg(ap, double));
				break;
			case 's':
			{
				tmp_str = va_arg(ap, char *);
				withnil = ", %s%s";
				nil = "";
				if (tmp_str == NULL)
				{
					withnil = ", %s";
					nil = "(nil)";
				}
				printf(withnil, nil, tmp_str);
			}
		}
		i++;
	}
	printf("\n");
}
