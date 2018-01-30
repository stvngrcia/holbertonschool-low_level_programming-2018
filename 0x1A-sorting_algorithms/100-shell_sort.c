#include "sort.h"
#include <stdlib.h>
void swap(int *array, int gap, int idx);


/**
 * shell_sort - Sorts an array of integers in ascending order unsing the
 * shell sort algorithm.
 * @array: Pointer to a list of numbers.
 * @size: The size of the array.
 */
void shell_sort(int *array, size_t size)
{
	int limit;
	int idx;
	int gap;
	int up;

	if (size < 2)
		return;
	up = (int) size;
	for (gap = 1; gap < up / 3; gap = gap * 3 + 1)
	{}

	for (limit = 0; limit < up;)
	{
		idx = limit;

		while (idx < up)
		{
			if (idx + gap < up && array[idx] > array[idx + gap])
				swap(array, gap, idx);
			idx = idx + gap;
		}
		limit++;
		if (limit == gap)
		{
			gap = gap / 3;
			limit = 0;
			print_array(array, size);
		}
		if (gap < 1)
			break;
	}
}

/**
 * swap - Swaps the numbers when needed.
 * @array: Points to the list of numbers that need to be sorted.
 * @gap: The gap used to swap the numbers.
 * @idx: The index of the number that has the possibility to get swapped.
 */
void swap(int *array, int gap, int idx)
{
	int tmp;

	tmp = array[idx];
	array[idx] = array[idx + gap];
	array[idx + gap] = tmp;
	idx = idx - gap;
	while (idx >= 0)
	{
		if (array[idx] > array[idx + gap])
		{
			tmp = array[idx];
			array[idx] = array[idx + gap];
			array[idx + gap] = tmp;
		}

		idx = idx - gap;
	}
}
