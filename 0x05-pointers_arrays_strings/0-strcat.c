#include "holberton.h"
/**
 * _strcat - Concatenates two stings
 * @dest: Destination string
 * @src: the source of the string
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
	{}

	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}
