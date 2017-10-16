#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the attributes inside a struct
 * @d: pointer to a struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
