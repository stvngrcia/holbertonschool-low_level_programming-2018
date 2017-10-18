#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two numbers
 * @a: First number
 * @b: Second number
 * Return: The sum of both numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the difference of two numebers
 * @a: First number
 * @b: Second number
 * Return: The difference of both numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculates the product of two numebers
 * @a: First number
 * @b: Second number
 * Return: The product of two numebers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculates the division of two numbers
 * @a: First number
 * @b: Second number
 * Return: The division of two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates the remainder of two numbers
 * @a: First number
 * @b: Second number
 * Return: The remainder of two numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
