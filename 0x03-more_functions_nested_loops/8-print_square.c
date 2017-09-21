#include "holberton.h"
/**
 * print_square - Prints square of size size
 * @size : size of square
 */
void print_square(int size)
{
	int row;
	int collumn;

	for (row = 0; row < size; row++)
	{
		for (collumn = 0; collumn < size; collumn++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
