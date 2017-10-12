#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Amount of array values
 * @size: The size of each array value
 * Return: A pointer to the begining of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *heap_array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	heap_array = malloc(nmemb * size);
	if (heap_array == NULL)
		return (NULL);

	for (i = 0;  i < nmemb * size; i++)
		heap_array[i] = 0;

	return (heap_array);
}
