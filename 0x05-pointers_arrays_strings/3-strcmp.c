#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: It returns an integer less than, equal to, or greater
 * than zero if s1 is found, respec‐tively,
 * to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	return (s1[0] - s2[0]);
}
