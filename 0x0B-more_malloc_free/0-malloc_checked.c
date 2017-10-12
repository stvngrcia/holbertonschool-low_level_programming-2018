#include <stdlib.h>
/**
 * malloc_checked - Allocating with malloc
 * @b: Amount of bytes that need to be allocated
 * Return: a pointer to a void
 */
void *malloc_checked(unsigned int b)
{
	void *heap_array;

	heap_array = malloc(b);

	if (heap_array == NULL)
		exit(98);

	return (heap_array);
}
