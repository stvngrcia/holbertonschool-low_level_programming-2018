#include <stdarg.h>

/**
 * sum_them_all - Adds all the numbers
 * @n: The number of parameters passed
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list a_list;

	sum = 0;
	va_start(a_list, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(a_list, int);

	return (sum);
}
