#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new instance of a struct
 * @name: A string representing the name of a dog
 * @age: An integer representing then age of a dog
 * @owner: A string representing the name of a dog owner
 * Return: A pointer to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *d_name;
	char *d_owner;

	d_owner = strdup(owner);
	d_name = strdup(name);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (owner == NULL)
	{
		free(d);
		return (NULL);
	}

	if (name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = d_name;
	d->age = age;
	d->owner = d_owner;
	return (d);
}
