#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: number
 *
 * Return: The last digit
 *
 */
int print_last_digit(int n)
{
	_putchar (n >= 0 ? (n % 10 + 48) : (n * -1) % 10 + 48);
	return (n >= 0 ? n % 10 : (n * -1) % 10);
}
