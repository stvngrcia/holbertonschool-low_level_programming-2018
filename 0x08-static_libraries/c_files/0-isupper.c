#include "holberton.h"
/**
 * _isupper - Checks if a letter is upper case
 * @c: Character used to determine if uppercase
 * Return: Returns 1 if the letter is Uppercase 0 if lowercase
 */
int _isupper(int c)
{
	return (c >= 65 && c <= 90);
}
