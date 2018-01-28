#include "sort.h"
#include <stdlib.h>
void sort(int *array, size_t low, size_t size, size_t);

/**
 * quick_sort - Sorts an array of integers in asceding order using the
 * quick sort algorithm implementing the Lomuto partition scheme.
 * @array: Array of integers that need to be sorted.
 * @size: The size of the array to sort.
 */
void quick_sort(int *array, size_t size)
{
	size_t low;

	low = 0;
	if (size < 2)
		return;
	sort(array, low, size - 1, size);
}

/**
 * sort - Does the actual sorting.
 * @array: Array of integers that need to be sorted.
 * @low: The lower bound of the array partition.
 * @size: The upper bound of the array partion.
 * @og: The original size of the whole array. Used only for printing.
 */
void sort(int *array, size_t low, size_t size, size_t og)
{
	int tmp;
	size_t pivot;
	size_t ptr1;
	size_t ptr2;

	pivot = size;
	ptr1 = low;
	ptr2 = pivot - 1;
	if (pivot == 0 || size == 0 || ptr2 <= ptr1)
		return;
	while (ptr1 != ptr2)
	{
		if (array[ptr1] > array[pivot] && array[ptr2] < array[pivot])
		{
			tmp = array[ptr1];
			array[ptr1] = array[ptr2];
			array[ptr2] = tmp;
			ptr1++;
			if (ptr1 == ptr2)
				break;
			ptr2--;
			print_array(array, og);
		}
		else
		{
			if (array[ptr1] <= array[pivot])
				ptr1++;
			else if (array[ptr2] >= array[pivot])
				ptr2--;
		}
	}
	if (array[pivot] < array[ptr1])
	{
		tmp = array[pivot];
		array[pivot] = array[ptr1];
		array[ptr1] = tmp;
		print_array(array, og);
	}
	sort(array, low, ptr1, og);
	sort(array, ptr1, size, og);
}
