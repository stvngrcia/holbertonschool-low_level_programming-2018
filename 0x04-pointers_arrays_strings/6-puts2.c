#include "holberton.h"

/**
 * puts2 - prints only even
 *
 * @str: string to reverse
 */

void puts2(char *str)
{
	int i;
	int len;

	for (len = 1; str[len]; len++)
	{}

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
