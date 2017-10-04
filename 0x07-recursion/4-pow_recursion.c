/**
 * _pow_recursion - Calculates the power of a function
 * @x: Integer to raise
 * @y: Exponent
 * Return: -1 if y is negative or the calculation if above 0
 */
int _pow_recursion(int x, int y)
{
	if (y < -1)
		return (-1);
	if (y == 0)
		return (1);
	if (y <= 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
