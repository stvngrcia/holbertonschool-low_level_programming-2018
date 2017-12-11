#include "holberton.h"

/**
 * _strstr - locate a substring
 * @haystack: string to look in
 * @needle: string to locate
 * Return: A pointer to the beginning of the substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			if (_strcmp(haystack, needle))
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
