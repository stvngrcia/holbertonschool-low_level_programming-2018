#include "holberton.h"

/**
 * binary_to_uint - Converters a binary number to an unsigned integer
 * @b: String representing a binary number
 * Return: The converted number or 0 if b is NULL or if there are chars
 * that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int i;
	unsigned int j;
	unsigned int sum;
	unsigned int pow;
	int base;

	base = 2;
	sum = 0;
	pow = 1;
	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++) /*Getting the length of b num*/
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1')) /*Checking single nums*/
		return ((b[0] - 48));
	for (i = 0; b[i] != '\0'; i++) /*Iterating through the string*/
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = len - 1; j > 0; j--) /*Calculating the exponent*/
			pow = pow * base;
		sum = sum + (pow * (b[i] - 48)); /*Adding the number*/
		len--;
		pow = 1; /*Reseting the exponent*/
	}
	return (sum);
}
