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

	number = 0;
	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
