#include <stdlib.h>

/**
 * _realloc - Creates new space in memory, copies the contents over, fre
 * @ptr: Pointer to previously allocated array
 * @old_size: Size of old array
 * @new_size: Size of new array
 * Return: Pointer to a void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *pt;
	char *heap_array;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*Casting a void* to a char* */
	pt = (char *)ptr;
	heap_array = malloc(sizeof(char) * new_size);
	if (heap_array == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			heap_array[i] = pt[i];
	}
	free(ptr);
	return (heap_array);
}
