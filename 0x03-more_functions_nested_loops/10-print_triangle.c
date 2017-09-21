#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: Triangle size
 */
void print_triangle(int size)
{
	int space;
	int tmp;
	int counter;

	tmp = size;
	for (counter = 0; counter < size; counter++)
	{
		for (space = 0; space < tmp - 1; space++)
			_putchar(' ');
		tmp = tmp - 1;
		for (; space < size; space++)
			_putchar('#');
		_putchar('\n');

	}
}
