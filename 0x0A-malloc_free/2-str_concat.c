#include <stdlib.h>
#include <stdio.h>
int len(char *str);

/**
 * str_concat - Concats to strings by allocating memory
 * @s1: First string to concat
 * @s2: Second string to concat
 * Return: Pointer to an array of NULL if not enough space
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int s1_len;
	int s2_len;
	char *heap_array;

	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';
	s1_len = len(s1);
	s2_len = len(s2);

	heap_array = malloc(s1_len + s2_len + 1);
	if (heap_array == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		if (s1_len <= 0)
			heap_array[i] = '\0';
		else
			heap_array[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++, s1_len++)
	{
		if (s2_len <= 0)
			heap_array[s1_len] = '\0';
		else
			heap_array[s1_len] = s2[i];
	}
	heap_array[s1_len] = '\0';
	return (heap_array);
}

/**
 * len - Calculating the length of a string
 * @str: String to calculate len
 * Return: Integer with the size of the string if NULL returns 0
 */

int len(char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{}
	return (i);
}
