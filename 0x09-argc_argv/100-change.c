#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Counter for arguments
 * @argv: An array of all the arguments
 * Description: Calculates how many coins I need to give back
 * Return: 0 if sucessful 1 if unsucessful
 */
int main(int argc, char **argv)
{
	int amount;
	int leftover;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	leftover = atoi(argv[1]);
	for (amount = 0; leftover > 0; amount++)
	{
		if (leftover - 25 >= 0)
			leftover = leftover - 25;
		else if (leftover - 10 >= 0)
			leftover = leftover - 10;
		else if (leftover - 5 >= 0)
			leftover = leftover - 5;
		else if (leftover - 2 >= 0)
			leftover = leftover - 2;
		else if (leftover - 1 >= 0)
			leftover = leftover - 1;
	}
	printf("%d\n", amount);
	return (0);
}
