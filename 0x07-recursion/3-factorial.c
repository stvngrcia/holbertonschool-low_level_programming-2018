#include "holberton.h"

/**
 * factorial - Calculating the factorial of a n number
 * @n: Number to calcualte the factorial of
 * Return: The complete calculation of factorial number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
