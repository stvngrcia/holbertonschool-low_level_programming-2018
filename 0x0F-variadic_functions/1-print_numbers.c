#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers passed to it separated by the separator
 * @separator: String used to separate numbers, if NULL gets replaced by empty
 * @n: number of unnamed arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a_list;

	va_start(a_list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a_list, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
