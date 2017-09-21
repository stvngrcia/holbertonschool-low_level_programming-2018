#include "holberton.h"
/**
 * print_most_numbers - prints numbers 0 to 9 using ascii values except 2 & 4
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		if (number != 2 &&  number != 4)
		{
			_putchar(number + 48);
		}
	}
	_putchar('\n');
}
