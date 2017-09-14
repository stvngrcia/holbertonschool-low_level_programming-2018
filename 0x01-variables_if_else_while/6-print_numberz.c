#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints numbers of base 10 starting at 0
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	number = 48;
	while (number != ':')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
