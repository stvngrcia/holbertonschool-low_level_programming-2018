#include <stdio.h>
/**
 * get_endianness - Checks the systems Byte order
 * Return: Returns 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int x;
	int little_or_big;

	x = 1;
	little_or_big = (int) (((char *)&x)[0]);
	return (little_or_big);
}
