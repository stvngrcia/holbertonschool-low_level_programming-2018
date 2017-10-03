#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello,  wide world";
    char *f = NULL;
    char *t;

    t = _strstr(s, f);
    if (t != NULL)
    {
	printf("%s\n", t);
    }
    else{
	    printf("NULL");
    }


    return (0);
}
