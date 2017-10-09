#include <stdio.h>
#include <stdlib.h>
int isnumber(char *argument);

/**
 * main - Entry point
 * @argc: Counter for arguments
 * @argv: An array of all the arguments
 * Description: Adds arguments
 * Return: Zero if sucessful 1 if unsucessful
 */

int main(int argc, char **argv)
{
	int sum;
	int i;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{

		if (isnumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum +  atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * isnumber - checks if there is not a numeber on the string
 * @argument: argument string
 * Return: 0 if not letters are found returns 1 if there are letters
 */
int isnumber(char *argument)
{
	int i;

	for (i = 0; argument[i] != '\0'; i++)
	{
		if (argument[i] < '0' ||  argument[i] > '9')
		{
			return (1);
		}
	}
	return (0);
}
