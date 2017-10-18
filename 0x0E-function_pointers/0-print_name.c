#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name
 * @name: A pointer to a string
 * @f: A pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	if (name == NULL || f == NULL)
		return;
	p = f;
	p(name);
}
