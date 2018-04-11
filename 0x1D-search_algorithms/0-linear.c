#include "search_algos.h"


/**
 * linear_search - Looks for a value in an array
 * @array: list of integers
 * @size: The size of the array
 * @value: The value that the algorithm is trying to find
 * Return: The index in which the value is located in the array. If the
 * value is not found -1 is return.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx <= size - 1; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
