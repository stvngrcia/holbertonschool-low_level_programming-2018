#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints digits from 000 - 999 that are different
 *
 * Return: Always zero
 */
int main(void)
{
	int number;
	int number_1;
	int number_2;

	number = 48;
	while (number <= 57)
	{
		number_1 = 48;
		while (number_1 <= 57)
		{
			number_2 = 48;
			while (number_2 <= 57)
			{
				if (number < number_1 && number_1 < number_2)
				{
					putchar(number);
					putchar(number_1);
					putchar(number_2);
					if (number < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
				number_2++;
			}
			number_1++;
		}
		number++;
	}
	putchar('\n');
	return (0);
}
