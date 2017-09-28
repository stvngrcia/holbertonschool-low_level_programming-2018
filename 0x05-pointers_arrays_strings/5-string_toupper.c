#include "holberton.h"
/**
 * string_toupper - Converts all lowercase letters to upper in a string
 * @str: string to convert character from
 * Return: Converted string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
