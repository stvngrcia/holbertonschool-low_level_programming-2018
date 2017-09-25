#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: string to print
 * @n: len of string
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
