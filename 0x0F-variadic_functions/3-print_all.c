#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	if (format == NULL)
		return;
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
