#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Pointer to an array containing the parameters
 * Return: Always zero
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	char *s;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];


	if (*s != '+' && *s != '/' && *s != '-' && *s != '%' && *s != '*')
	{
		printf("Error\n");
		exit(99);
	}

	fun = get_op_func(s);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fun(a, b));
	return (0);
}
