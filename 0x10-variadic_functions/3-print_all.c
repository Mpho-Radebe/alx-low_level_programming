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

	va_start(ap, format);
	switch (format[0])
	{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
		{
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
	while (format[i] != '\0')
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
