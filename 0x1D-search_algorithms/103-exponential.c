#include "search_algos.h"
int finder(int *array, size_t size, size_t low, size_t high, int value);
void print_array(int *array, size_t low, size_t high);
int b_search(int *array, size_t size, int low, int high, int value);

/**
 * exponential_search - Tries to locate a number in the array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for.
 * Return: The index where the value was found or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx;
	int low;

	if (array == NULL || size == 0)
		return (-1);

	for (idx = 1; idx < size; idx = idx * 2)
	{
		if (array[idx] > value)
			break;
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
	}
	low = idx / 2;
	if (idx >= size)
		idx--;
	size = idx - low;
	printf("Value found between indexes [%d] and [%lu]\n", low, idx);
	return (b_search(array, size, low, idx, value));
}

/**
 * b_search - Searches for a value in an array by splitting the array in
 * half every time.
 * @array: List of integer numbers sorted in an ascending order
 * @size: The total amount of numbers in the array.
 * @value: The element that the algorithm is trying to find.
 * @low: The lowest point in the array.
 * @high: The highest point of the array.
 * Return: The index in which the value is located. Or if it does not exits
 * or array is NULL -1.
 */
int b_search(int *array, size_t size, int low, int high, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	if (size == 1)
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
