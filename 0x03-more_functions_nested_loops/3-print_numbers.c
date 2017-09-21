#include "holberton.h"
/**
 * print_numbers - prints numbers 0 to 9 using ascii values
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
		_putchar(number + 48);
	_putchar('\n');
}
