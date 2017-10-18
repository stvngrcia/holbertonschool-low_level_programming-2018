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

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if (*s != '+' && *s != '/' && *s != '-' && *s != '%' && *s != '*')
	{
		printf("ERROR\n");
		exit(99);
	}
	if ((*s == '/' && b == 0) || (*s == '%' && b == 0))
	{
		printf("ERROR\n");
		exit(100);
	}
	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}
