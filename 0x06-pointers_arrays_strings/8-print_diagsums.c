#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < (size * size);)
	{
		i = i + size + 1;
		sum = sum + a[i];
	}
	printf("%d\n", sum);
}