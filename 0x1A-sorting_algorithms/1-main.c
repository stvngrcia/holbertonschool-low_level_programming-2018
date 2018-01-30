#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

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
    /*48, 19*/
    /*1, 13, 5, 30, 50*/
    listint_t *list;
    int array[] = {17, 41, 5, 22, 28, 6, 5, 3, 5};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}
