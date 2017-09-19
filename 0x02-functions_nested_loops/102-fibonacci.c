#include <stdio.h>
/**
 * main - Entry point
 * Description: Calculates the first 50 Fibonacci numbers
 * Return: Always Zero
 */

int main(void)
{
	int n;
	long a;
	long b;
	long c;

	a = 1;
	b = 2;
	printf("%lu, ", a);
	printf("%lu", b);
	for (n = 0; n <= 47; n++)
	{
		if (n <= 47)
			printf(", ");
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
