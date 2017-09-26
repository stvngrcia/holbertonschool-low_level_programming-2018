#include "holberton.h"
/**
 * puts_half - Prints only half of the string
 * @str: string to print
 */
void puts_half(char *str)
{
	int len;
	int half_len;

	for (len = 1; str[len] != '\0'; len++)
	{}

	if (len % 2 == 0)
		half_len = len / 2;
	else
		half_len = (len - 1) / 2;

	for (; half_len < len; half_len++)
		_putchar(str[half_len]);
	_putchar('\n');
}
