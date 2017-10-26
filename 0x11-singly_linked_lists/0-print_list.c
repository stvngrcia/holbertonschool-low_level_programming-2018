#include "lists.h"

/**
 * print_list - Prints all of the elements of a linked list.
 * @h: Pointer to a linked list head.
 * Return: The number of total nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 1; h->next != NULL; i++)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;

	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}
