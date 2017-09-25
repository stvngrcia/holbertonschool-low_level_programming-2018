#include "holberton.h"
/**
 * puts_half - Prints only half of the string
 * @str: string to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
		_putchar(a[i]);
	_putchar('\n');
}