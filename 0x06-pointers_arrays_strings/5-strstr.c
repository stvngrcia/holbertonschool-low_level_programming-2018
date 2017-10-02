#include "holberton.h"
int _strcmp(char *s1, char *s2);
/**
 * _strstr - locate a substring
 * @haystack: string to look in
 * @needle: string to locate
 * Return: A pointer to the beginning of the substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			if (_strcmp(haystack, needle))
				return (haystack);
		}

		haystack++;
	}
	return (NULL);
}

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
			return (0);
	}

	return (1);
}
