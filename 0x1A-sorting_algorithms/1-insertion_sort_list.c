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
		if (key->next != NULL && key->next->n < key->n)
		{
			tmp = key->next;
			key->prev->next = tmp;
			if (tmp->next != NULL)
				tmp->next->prev = key;
			key->next = tmp->next;
			tmp->prev = key->prev;
			tmp->next = key;
			key->prev = tmp;
			print_list(*list);
		}
		else
		{
			tmp = key;
			key = key->next;
		}
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;
			tmp->next = tmp->prev;
			if (tmp->prev->prev != NULL)
				tmp->prev->prev->next = tmp;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (tmp->next->next != NULL)
				tmp->next->next->prev = tmp->next;
			if (tmp->prev == NULL)
				*list = tmp;
			print_list(*list);
		}
	}
}
