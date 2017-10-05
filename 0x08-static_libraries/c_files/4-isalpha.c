#include "holberton.h"

/**
 * _isalpha - checks for lowercase or uppercase characters
 *
 * @c: Character represented on ascii
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
