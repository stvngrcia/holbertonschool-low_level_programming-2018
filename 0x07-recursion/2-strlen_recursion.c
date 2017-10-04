#include "holberton.h"
int len(char *s, int counter);

/**
 * _strlen_recursion - Calculates the length of a string
 * @s: String to calculate the length of
 * Return: Total length
 */
int _strlen_recursion(char *s)
{
	int counter;

	counter = 0;
	counter = len(s, counter);
	return (counter);
}


/**
 * len - Calculates the length of a string
 * @s: String to calculate the length of
 * @counter: Keeping track of the previous counter
 * Return: Total length
 */
int len(char *s, int counter)
{
	if (*s == '\0')
		return (counter);
	counter++;
	s++;
	return (len(s, counter));
}
