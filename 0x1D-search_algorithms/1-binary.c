#include "search_algos.h"
int finder(int *array, size_t size, size_t low, size_t high, int value);
void print_array(int *array, size_t low, size_t high);

/**
 * binary_search - Searches for a value in an array by splitting the array in
 * half every time.
 * @array: List of integer numbers sorted in an ascending order
 * @size: The total amount of numbers in the array.
 * @value: The element that the algorithm is trying to find.
 * Return: The index in which the value is located. Or if it does not exits
 * or array is NULL -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;

	if (array == NULL || size == 0)
		return (-1);

	size = size - 1;
	low = 0;
	high = size;
	if (size == 0)
	{
		print_array(array, low, high);
		if (array[size] == value)
			return (size);
		return (-1);
	}
	return (finder(array, size, low, high, value));
}

/**
 * finder - Finds a value in an array.
 * @array: List of integer numbers sorted in an ascending order
 * @size: The total amount of numbers in the array.
 * @value: The element that the algorithm is trying to find.
 * @low: The low end of the array.
 * @high: The high end of the array.
 * Return: The index in which the value is located. Or if it does not exits
 * or array is NULL -1
 */
int finder(int *array, size_t size, size_t low, size_t high, int value)
{
	int mid;

	mid = size / 2 + low;

	print_array(array, low, high);

	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
	{
		low = mid + 1;
		size = high - low;
	}
	else if (array[mid] > value)
	{
		high = mid - 1;
		size = mid - low;
	}
	if (size == 0 && array[mid + 1] != value)
	{
		print_array(array, low, high);
		return (-1);
	}
	return (finder(array, size, low, high, value));
}

/**
 * print_array - Prints an array of integers separated by a comma and space.
 * @array: List of integer numbers sorted in an ascending order.
 * @low: The low end of the array.
 * @high: The high end of the array.
 */
void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	while (low < high)
	{
		printf("%d, ", array[low]);
		low++;
	}
	printf("%d\n", array[low]);
}
