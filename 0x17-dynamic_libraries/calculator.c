/**
 * add - Adds two numbers
 * @a: first number
 * @b: Second number
 * Return: The calculation
 */

int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - Subtracts two numbers
 * @a: first number
 * @b: Second number
 * Return: The calculation
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - Multiplies two numbers
 * @a: first number
 * @b: Second number
 * Return: The calculation
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - divides two numbers
 * @a: first number
 * @b: Second number
 * Return: The calculation
 */
int div(int a, int b)
{
    if (b == 0)
        return (0);
    return (a / b);
}

/**
 * mod - Remainder of two numbers
 * @a: first number
 * @b: Second number
 * Return: The calculation
 */
int mod(int a, int b)
{
    return (a % b);
}
