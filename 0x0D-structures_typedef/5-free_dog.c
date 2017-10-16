#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Freeing a pointer to a struct
 * @d: Pointer to a struct
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
