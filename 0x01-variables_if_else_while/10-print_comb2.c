#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all number 00 - 99  separated by a comma
 *
 * Return: Always 0
 */
int main(void)
{
	int number;
	int number1;

	number = 48;
	while (number <= 57)
	{
		number1 = 48;
		while (number1 <= 57)
		{
			putchar(number);
			putchar(number1);
			number1++;
			if (number < 57 || number1 <= 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		number++;
	}
	putchar('\n');
	return (0);
}
