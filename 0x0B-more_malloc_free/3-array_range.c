#include <stdlib.h>
#include <stdio.h>
int length(int min, int max);

/**
 * array_range - Allocates and writes an array and all the values needed
 * @min: the starting point
 * @max: the ending point
 * Return: Pointer to the array
 */
int *array_range(int min, int max)
{
	int i;
	int len;
	int *heap_array;

	if (min > max)
		return (NULL);

	len = length(min, max);

	heap_array = malloc(sizeof(int) * len);
	if (heap_array == NULL)
		return (NULL);

	for (i = 0; min <= max ; i++)
	{
		heap_array[i] = min;
		min++;
	}
	return (heap_array);
}

/**
 * length - Calculates the length of the array
 * @min: the starting point
 * @max: the ending point
 * Return: The total length for the array
 */
int length(int min, int max)
{
	int l;

	for (l = 0; min != max; min++)
	{
		l++;
	}
	l++;
	return (l);
}
