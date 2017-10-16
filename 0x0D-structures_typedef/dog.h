#ifndef HOLB
#define HOLB

/**
 * struct dog - Defines a dogs attributes
 * @name: A string for the dogs name
 * @age: An integer for the dogs age
 * @owner: A string for the owners name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif