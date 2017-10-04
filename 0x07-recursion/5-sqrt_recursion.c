int calculation(int n, int mult);

/**
 * _sqrt_recursion - Calculates the square root of a number
 * @n: Number to calculate the square root of
 * Return: The square root of a number
 */
int _sqrt_recursion(int n)
{
	int mult;

	mult = 1;
	mult = calculation(n, mult);
	return (mult);
}

/**
 * calculation - Calculates the square root of a number
 * @n: Number to calculate the square root of
 * @mult: Keeps track of the numbers
 * Return: The square root of a number
 */
int calculation(int n, int mult)
{
	if (n < 0)
		return (-1);
	if (mult * mult == n)
		return (mult);
	if (mult > n)
		return (-1);
	return (calculation(n, mult + 1));
}
