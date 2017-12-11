#include "holberton.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: Character used to determine if it is a digit
 * Return: Returns 1 if the letter is Uppercase 0 if lowercase
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
