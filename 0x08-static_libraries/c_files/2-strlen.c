#include "holberton.h"
/**
 * _strlen - Calculates the length of a string
 * @s: string
 * Descripion: Calculates the lenght of a string
 * Return: An integer representing the lenght of a string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
	{}

	return (len);
}
