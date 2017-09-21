#include <stdio.h>
/**
 * main - Entry point
 * Description: Finds the highest prime factor of a number
 * Return: Always 0.
 */
int main(void)
{
	long number;
	long factor;
	long highest;

	number = 612852475143;
	factor = 2;
	highest = 0;
	while (number != 1)
	{
		if (number % factor == 0)
		{
			if (highest < factor)
				highest = factor;
			number = number / factor;
		}
		else
		{
			factor++;
		}
		/* Updating number to the product*/
	}
	printf("%lu\n", highest);
	return (0);
}
