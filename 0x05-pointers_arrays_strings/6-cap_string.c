#include "holberton.h"
/**
 * cap_string - Capitalizes words on a string
 * @str: string to convert character from
 * Return: Converted string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/*Special case for first letter*/
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;

		if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		if (str[i] == '.' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		if (str[i] == '\t' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		if (str[i] == '\n' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
