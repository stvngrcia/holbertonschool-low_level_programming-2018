#include <math.h>
#include "search_algos.h"


/**
 * jump_search - Searches for a value in an array
 * @array: The size of the array we are looking through
 * @size: The size of the array
 * @value: The value that the function is trying to find.
 * Return: The index of the value or if value is not present in array
 * or if array is NULL, your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_point;
	int low;
	int high;
	int idx;
	char *message;

	if (array == NULL)
		return (-1);
	jump_point = sqrt(size);

	for (idx = 0; idx < (int)size; idx += jump_point)
	{
		if (value <= array[idx])
		{
			low = idx - 3;
			high = idx;
			message = "Value found between indexes";
			printf("%s [%d] and [%d]\n", message, low, high);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
	}
	if (idx > (int)size)
	{
		low = idx - jump_point;
		high = low;
		message = "Value found between indexes";
		printf("%s [%d] and [%d]\n", message, low, idx);
	}

	for (idx = low; idx <= high; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[idx]);
		if (value == array[idx])
			return (idx);
	}
	return (-1);
}
