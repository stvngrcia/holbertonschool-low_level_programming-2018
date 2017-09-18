#include "holberton.h"

/**
 * print_alphabet_x10 - printing the alphabet
 */

void print_alphabet_x10(void)
{
	int letter;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar ('\n');
	}
}
