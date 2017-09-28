#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: array of integers
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++, n--)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
	}
}
