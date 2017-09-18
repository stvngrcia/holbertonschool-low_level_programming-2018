#include <stdio.h>
int _putchar(char c);
/**
 * main - printing Holberton string
 *
 * Return: On success 0.
 */
int main(void)
{
	char *string;
	int i;

	string = "Holberton";
	for (i = 0; i <= 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
