#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of parameters
 * @argv: An array with the parameters passed to the function
 * Description: multiples two numbers
 * Return: zero if sucessful 1 if there is less than 2 arguments
 */
int main(int argc, __attribute__((unused))char **argv)
{
	int mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
