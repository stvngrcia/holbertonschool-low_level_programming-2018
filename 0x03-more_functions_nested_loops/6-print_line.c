#include "holberton.h"
/**
 * print_line - Prints a line of lenght n
 * @n : lenght of line
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
