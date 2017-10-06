#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of parameters
 * @argv: An array with the parameters passed to the function
 * Description: prints all the arguments it receives
 * Return: Aways zero
 */
int main(__attribute__((unused))int argc, char **argv)
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
