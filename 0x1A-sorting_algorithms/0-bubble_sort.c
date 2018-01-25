#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: Pointer to an array of integers to be sorted.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	size_t counter;

	if (size < 2)
		return;
	for (counter = 0; size - 1 != counter;)
	{
		counter = 0;

		for (i = 0; i + 1 != size; i++)
		{
			if (array[i + 1] < array[i])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
			else
				counter++;
		}
	}
}
