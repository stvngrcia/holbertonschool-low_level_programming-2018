#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: It returns an integer less than, equal to, or greater
 * than zero if s1 is found, respec‐tively,
 * to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
