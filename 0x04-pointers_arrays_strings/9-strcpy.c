#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - create a copy of a string
 * @dest: will contain the copy of the original string
 * @src: Contains the original string
 * Return: Gives back the copy of string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	return (dest);
}
