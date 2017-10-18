#include <stdlib.h>
/**
 * int_index - Searches for an integer index on an array
 * @array: Array containing the values
 * @size: Size of the array
 * @cmp: Pointer to a function
 * Return: -1 if not index found or size is 0 or less. Index number when
 * number is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
