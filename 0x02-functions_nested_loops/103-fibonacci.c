#include <stdio.h>
/**
 * main - Entry point
 * Description: Calculates the sum of even fib numbers lower than 4,000,000
 * Return: Always Zero
 */

int main(void)
{
	int n;
	long a;
	long b;
	long c;
	long sum;

	a = 1;
	b = 2;
	sum = 2;
	for (n = 0; n <= 29; n++)
	{
		c = a + b;
		if (c % 2 == 0)
			sum = sum + c;
		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}
