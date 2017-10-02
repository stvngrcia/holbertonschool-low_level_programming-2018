#include "holberton.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: String to search through
 * @accept: String that tells what to search for
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return (NULL);
}
