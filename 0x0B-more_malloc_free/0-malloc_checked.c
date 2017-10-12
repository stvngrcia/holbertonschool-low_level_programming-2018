#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *heap_array;

	heap_array = malloc(b);

	if (heap_array == NULL)
		exit(98);

	return (heap_array);
}
