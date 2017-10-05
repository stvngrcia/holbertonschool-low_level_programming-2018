#include "holberton.h"
/**
 * _strncpy - Copies a string up to an n byte
 * @dest: Destination string
 * @src: the source of the string
 * @n: number of bytes to look
 * Return: Returns a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
