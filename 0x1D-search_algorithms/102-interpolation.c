#include "search_algos.h"
int find_number(int *a, size_t size, int val, int l, int high);


/**
 * interpolation_search - Searches for a number in an array
 * @array: List of integers in which the potential number might be located.
 * @size: The length of the list.
 * @value: The value we are trying to find.
 * Return: The first index where value is located, or if value is not present
 * in array or if array is NULL, your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{

	return (find_number(array, size - 1, value, 0, size - 1));
}

/**
 * find_number - Searches for a number in an array
 * @a: List of integers in which the potential number might be located.
 * @size: The length of the list.
 * @val: The value we are trying to find.
 * @l: the low end of the array
 * @high: the high end of the array
 * Return: The first index where value is located, or if value is not present
 * in array or if array is NULL, your function must return -1
 */
int find_number(int *a, size_t size, int val, int l, int high)
{
	size_t pos;

	pos = l + (((double)(high - l) / (a[high] - a[l])) * (val - a[l]));
	if (pos > size)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	if (a[pos] == val)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, val);
		return (pos);
	}
	for (pos = pos; pos <= size; pos++)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, a[pos]);
		if (a[pos] == val)
			return (pos);
	}
	return (-1);
}
