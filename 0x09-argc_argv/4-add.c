#include <stdio.h>
#include <stdlib.h>

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
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum = sum +  oi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
