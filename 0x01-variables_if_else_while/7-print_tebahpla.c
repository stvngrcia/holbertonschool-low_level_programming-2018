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

	letter = 'z';
	while (letter != '`')
	{
		putchar (letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
