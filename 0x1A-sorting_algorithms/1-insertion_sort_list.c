#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 * @list: Pointer to a pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *key;
	listint_t *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	key = (*list)->next;

	while (key != NULL)
	{
		if (key->next->n < key->n)
		{
			tmp = key->next;
			key->prev->next = tmp;
			tmp->next->prev = key;
			key->next = tmp->next;
			tmp->prev = key->prev;
			tmp->next = key;
			key->prev = tmp;
		}
		else
			key = key->next;
		while (tmp->prev != NULL && tmp->prev->n > tmp->n)
		{
			tmp->prev->next = key;
			key->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			key->prev->prev = tmp;
		}
	}
}
