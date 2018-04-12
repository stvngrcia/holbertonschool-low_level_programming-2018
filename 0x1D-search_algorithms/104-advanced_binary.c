#include "search_algos.h"
int finder(int *array, size_t size, size_t low, size_t high, int value);
void print_array(int *array, size_t low, size_t high);
int find_lowest(int *array, int mid, int value, int low);

/**
 * advanced_binary - Searches for a value in an array by splitting the arrayin
 * half every time.
 * @array: List of integer numbers sorted in an ascending order
 * @size: The total amount of numbers in the array.
 * @value: The element that the algorithm is trying to find.
 * Return: The index in which the value is located. Or if it does not exits
 * or array is NULL -1
 */
int advanced_binary(int *array, size_t size, int value)
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
	size_t mid;

	mid = size / 2 + low;

	printf("Searching in array: ");
	print_array(array, low, high);

	if (array[mid] == value)
		return (find_lowest(array, (int)mid, value, low));
	if (array[mid] < value)
	{
		low = mid + 1;
		size = high - low;
	}
	else if (array[mid] > value)
	{
		high = mid - 1;
		size = mid;
	}
	if (size == 0 && array[mid + 1] != value)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		return (-1);
	}
	return (finder(array, size, low, high, value));
}

/**
 * find_lowest - Finds the lowest mathching value in the array
 * @array: list containing different integers
 * @mid: The mid point of the array
 * @value: The value we are looking for
 * @low: The lowest point of the array
 * Return: The index of a value.
 */
int find_lowest(int *array, int mid, int value, int low)
{
	if (mid >= 0 && array[mid - 1] == value)
		return (finder(array, mid, low, mid, value));

	return (mid);
}


/**
 * print_array - Prints an array of integers separated by a comma and space.
 * @array: List of integer numbers sorted in an ascending order.
 * @low: The low end of the array.
 * @high: The high end of the array.
 */
void print_array(int *array, size_t low, size_t high)
{
	if (low < high)
	{
		printf("%d, ", array[low]);
		low++;
		print_array(array, low, high);
	}
	else if (low == high)
		printf("%d\n", array[low]);
}
