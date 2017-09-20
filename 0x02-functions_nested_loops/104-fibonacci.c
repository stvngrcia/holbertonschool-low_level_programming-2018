#include <stdio.h>
void calculation(long a, long b, int n);
void space(int n);
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
	c = 0;
	printf("%lu, ", a);
	printf("%lu", b);
	for (n = 0; n <= 88; n++)
	{
		space(n);
		if (n <= 88)
			c = a + b;
			a = b;
			b = c;
			printf("%lu", c);

		if (n >= 88)
		{
			calculation(a, b, n);
		}
	}
	printf("\n");
	return (0);
}
/**
 * space - prints spaces and commas when necessary
  * @n : counter for condition
 */
void space(int n)
{
	if (n <= 92)
		printf(", ");
}
/**
 * calculation - calculates for numbers that are higher than long max
 * @a : fibnumber
 * @b : fibnumber
 * @n : counter for loop
 */
void calculation(long a, long b, int n)
{
	long body_a;
	long head_a;
	long body_b;
	long head_b;
	long body_sum;
	long head_sum;

	head_a = a / 1000000000000000000;
	body_a = a % 1000000000000000000;

	head_b = b / 1000000000000000000;
	body_b = b % 1000000000000000000;

	for (; n <= 94; n++)
	{
		body_sum = body_a + body_b;
		head_sum = head_a + head_b;
		if (body_sum > 1000000000000000000)
		{
			body_sum = body_sum % 1000000000000000000;
			head_sum = head_sum + 1;
		}
		printf(", %lu%lu", head_sum, body_sum);
		body_a = body_b;
		body_b = body_sum;

		head_a = head_b;
		head_b = head_sum;
	}
}
