#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints base 16 characters
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	letter = 48;
	while (letter != 58)
	{
		putchar (letter);
		letter++;
	}
	letter = 97;
	while (letter != 103)
	{
		putchar (letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
