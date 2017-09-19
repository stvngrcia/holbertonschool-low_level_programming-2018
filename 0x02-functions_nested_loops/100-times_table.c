#include "holberton.h"

/**
 * print_times_table- prints the times table
 * @n: limit for multiplication
 */

void print_times_table(int n)
{
	int z;
	int m;
	int mult;

	if (n <= 15)
	{
		for (z = 0; z <= n; z++)
		{
			for (m = 0; m <= n; m++)
			{
				if (n <= 15 && n >= 0)
				{
					mult = (m * z);
					operation(mult);
					spaces(z, m, n);
				}
			}
			if (n <= 15 && n >= 0)
				_putchar('\n');
		}
	}
}

/**
 * operation- Prints the numbers character by character
 * @mult: multiplication
 */
void operation(int mult)
{
	if (mult <= 9)
	{
		_putchar(mult + 48);

	}
	else if (mult <= 99)
	{
		_putchar(mult / 10 + 48);
		_putchar(mult % 10 + 48);
	}
	else if (mult <= 999)
	{
		_putchar(mult / 100 + 48);
		_putchar((mult / 10) % 10 + 48);
		_putchar(mult % 10 + 48);
	}
}
/**
 * spaces- Decides when to put spaces in between numbers
 *@n: Number to multiply by collum
 *@m: Number to multiply by row
 *@z: Limit of number
 */
void spaces(int n, int m, int z)
{
	if (m < z)
	{
		_putchar(',');
		_putchar(' ');
	}
	if (n * (m + 1) <= 99 && m < z)
	{
		_putchar(' ');
	}
	if (n * (m + 1) <= 9 && m < z)
	{
		_putchar(' ');
	}
}
