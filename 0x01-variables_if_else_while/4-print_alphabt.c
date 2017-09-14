#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet using ascii values except e and q
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter != '{')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar (letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
