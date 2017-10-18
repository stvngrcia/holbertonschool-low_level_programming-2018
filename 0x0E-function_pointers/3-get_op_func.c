#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - Finds the right operation
 * @s: String character representing the operation
 * Return: A pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i][0] != NULL)
	{
		if (ops[i][0] == s)
			return (ops[0][1]);
	}
	return (NULL);
}
