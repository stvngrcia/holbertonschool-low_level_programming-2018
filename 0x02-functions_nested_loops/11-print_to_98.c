#include "holberton.h"
#include <stdio.h>
void more(int n);
void less(int n);
/**
 * print_to_98- prints n to 98
 * @n: number
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		less(n);
	}
	if (n > 98)
	{
		more(n);
	}
	printf("\n");

}
/**
 * less - for numbers less than 98
 * @n: number
 */
void less(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n < 98)
		{
			printf(",");
			printf(" ");
		}
	}
}
/**
 * more - numbers higher than 98
 * @n: number
 */
void more(int n)
{
	for (; n >= 98; n--)
	{
		printf("%d", n);
		if (n > 98)
		{
			printf(",");
			printf(" ");
		}
	}
}
