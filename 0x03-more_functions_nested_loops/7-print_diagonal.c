#include "holberton.h"
/**
 * print_diagonal - Prints a diagonal line oflenght n
 * @n : lenght of diagonal line
 */
void print_diagonal(int n)
{
	int c;
	int s;

	for(c = 0; c < n; c++)
	{
		for(s = 0; s < c; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
