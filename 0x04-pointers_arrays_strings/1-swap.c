#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 */

void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;
}
