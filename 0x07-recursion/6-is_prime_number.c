int calculation(int n, int div);

/**
 * is_prime_number - Calculates if a number is prime
 * @n: Number to check if prime
 * Return: 1 if prime 0 is not prime
 */
int is_prime_number(int n)
{
	int div;

	div = 2;
	div = calculation(n, div);
	return (div);
}


/**
 * calculation - Calculates if a number is prime
 * @n: Number to check if prime
 * @div: counter for prime
 * Return: 1 if prime 0 is not prime
 */
int calculation(int n, int div)
{
	/*It is prime*/
	if (n == div)
		return (1);
	/*Not prime*/
	if (n % div == 0 || n <= 1)
		return (0);

	return (calculation(n, div + 1));
}
