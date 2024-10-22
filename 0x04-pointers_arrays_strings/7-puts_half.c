#include <stdio.h>
#include "holberton.h"
/**
 * puts_half - Prints only half of the string
 * @str: string to print
 */
void puts_half(char *str)
{
	int len;
	int half_len;

	for (len = 0; str[len] != '\0'; len++)
	{}

	if (len % 2 != 0)
		len++;

	half_len = len / 2;
	for (; str[half_len] != '\0'; half_len++)
		_putchar(str[half_len]);
	_putchar('\n');
}
