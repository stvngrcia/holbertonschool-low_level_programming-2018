#include "holberton.h"
char *rev(char *s);

/**
 * _print_rev_recursion - pritns a  reversed string
 * @s: String to reverse
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	if (s[0] == '\n')
		s = rev(s);
	else if (*(s - 1) == '\n')
	{
		_putchar(*s);
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}

/**
 * rev - Reverses a string
 * @s: String to reverse
 * Return: Pointer to a string
*/
char *rev(char *s)
{
	s++;
	if (*(s + 1) == '\0')
		return (s);
	return (rev(s));
}
