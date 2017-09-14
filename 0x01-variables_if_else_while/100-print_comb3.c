#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing unique combinations
 *
 * Return: Always zero
 */
int main(void)
{
	int number;
	int number1;

	number = 48;
	while (number <= 57)
	{
		number1 = 0;
		while (number1 <= 57)
		{
			if (number < number1)
			{
				putchar(number);
				putchar(number1);
				if (number < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			number1++;
		}
		number++;
	}
	putchar('\n');
	return (0);
}
