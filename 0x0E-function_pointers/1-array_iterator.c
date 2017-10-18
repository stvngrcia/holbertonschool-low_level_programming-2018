#include <stdlib.h>
/**
 * array_iterator - Iterates through an array and calls a function
 * @array: Array to iterate
 * @size: size of the array
 * @action: Pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
