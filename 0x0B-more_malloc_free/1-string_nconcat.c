#include <stdlib.h>
unsigned int length(char *s1);

/**
 * string_nconcat - Concats two strings up to n bytes of the second one
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes
 * Return: Pointer to a char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	unsigned int len;
	char *heap_array;

	/* Initializing to an empty string if value is NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	len = length(s1);
	heap_array = malloc((len + n + 1) * sizeof(char));
	if (heap_array == NULL)
		return (NULL);
	len = length(s2);
	if (n >= len)
		n = len;
	/*Populating the new array with values*/
	for (i = 0; s1[i] != '\0'; i++)
		heap_array[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		heap_array[i] = s2[j];
	heap_array[i] = '\0';
	return (heap_array);
}

/**
 * length - Calculates the length of a string
 * @s1: The string
 * Return: The length of a string as an integer
 */
unsigned int length(char *s1)
{
	unsigned int i;

	if (s1 == NULL)
		return (0);
	for (i = 0; s1[i] !=  '\0'; i++)
	{}

	return (i);
}
