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

	s1_len = len(s1);
	s2_len = len(s2);
	if (s1 == NULL || s2 == NULL)
	{
		heap_array = malloc(sizeof(char));
		heap_array[0] = '\0';
		return (heap_array);
	}
	heap_array = malloc(s1_len + s2_len + 1);
	if (heap_array == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		heap_array[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++, s1_len++)
		heap_array[s1_len] = s2[i];
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
