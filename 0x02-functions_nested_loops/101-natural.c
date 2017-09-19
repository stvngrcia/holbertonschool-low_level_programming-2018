#include <stdio.h>

/**
 * main- Entry point
 * Definition: computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded)
 * Return: Always zero
 */
int main(void)
{
	int n;
	int sum;

	for (sum = 0, n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
