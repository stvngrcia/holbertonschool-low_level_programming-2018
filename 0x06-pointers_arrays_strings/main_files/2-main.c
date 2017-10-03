#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'k');
    if (f != NULL)
    {
	printf("%s\n", f);
    }
    else
    {
	printf("NULL\n");
    }
    return (0);
}
