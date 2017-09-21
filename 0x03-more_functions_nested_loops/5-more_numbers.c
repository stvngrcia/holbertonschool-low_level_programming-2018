#include "holberton.h"
/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			_putchar(m > 9 ? m / 10 + 48 : m + 48);
			if (m > 9)
			{
				_putchar(m % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
