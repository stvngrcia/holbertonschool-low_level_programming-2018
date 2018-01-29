#include "sort.h"
#include <stdlib.h>
void sort(int *array, size_t beg, size_t size, size_t);
int check(int *array, size_t beg, size_t end);
int swap(int *, size_t, size_t, size_t);

/**
 * quick_sort - Sorts an array of integers in asceding order using the
 * quick sort algorithm implementing the Lomuto partition scheme.
 * @array: Array of integers that need to be sorted.
 * @size: The size of the array to sort.
 */
void quick_sort(int *array, size_t size)
{
	size_t beg;

	beg = 0;
	if (size < 2 || array == NULL)
		return;
	size = size - 1;
	sort(array, beg, size, size + 1);
}

/**
 * sort - Does the actual sorting.
 * @array: Array of integers that need to be sorted.
 * @beg: The lower bound of the array partition.
 * @end: The upper bound of the array partion.
 * @og: The original size of the whole array. Used only for printing.
 */
void sort(int *array, size_t beg, size_t end, size_t og)
{
	size_t i;
	size_t j;
	int piv;
	int flag;
	int c;

	piv = array[end];
	j = beg;
	i = j - 1;
	flag = 0;

	for (j = beg; j < end; j++)
	{
		if (array[j] <= piv)
		{
			i++;
			flag = swap(array, j, i, og);
		}
	}
	i++;
	flag = swap(array, j, i, og);

	if (flag == 0)
	{
		c = check(array, beg, end);
		if (c == 1)
			sort(array, beg, end - 1, og);
	}
	else
	{
		sort(array, beg, i, og);
		sort(array, i, end, og);
	}
}

/**
 * swap - Swaps the numbers in the array.
 * @array: Array of integers that need to be sorted.
 * @i: The lower bound of the array partition.
 * @j: The upper bound of the array partion.
 * @og: The original size of the whole array. Used only for printing.
 * Return: 1 when a swap happens. 0 otherwise.
 */
int swap(int *array, size_t i, size_t j, size_t og)
{
	int tmp;

	if (j != i)
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, og);
		return (1);
	}
	return (0);
}

/**
 * check - checks if the array portion is already sorted.
 * @array: Array of integers that need to be sorted.
 * @beg: The lower bound of the array partition.
 * @end: The upper bound of the array partion.
 * Return: 1 if the array is not sorted. 0 otherwise.
 */
int check(int *array, size_t beg, size_t end)
{
	size_t i;

	for (i = beg; i < end; i++)
	{
		if (array[i] > array[i + 1])
			return (1);
	}
	return (0);
}
