#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    /*17, 41, 5, 22, 28, 6, 5, 3, 5*/
    /*1, 1, 1, 22, 28, 6, 5, 3, 13*/
    /*17, 41, 5, 22, 28, 6, 29, 3, 13*/
    /*19, 48, 99, 71, 13, 52, 96, 73, 86, 7*/
    /*1, 1, 1, 1, 2, 1, 1, 1, 1*/
    /*1, 1, 1, 1, 1, 1, 1, 2, 1, 1 , 1, 2*/
    /*48, 19, 50*/
    /*1, 13, 5, 30, 50*/
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
