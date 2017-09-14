#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all number 0 - 9 separated by a comma
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number < 57)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
