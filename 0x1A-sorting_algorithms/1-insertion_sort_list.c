#include "sort.h"
listint_t *swap(listint_t **current, listint_t **sorted);
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 * @list: Pointer to a pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *sorted;


	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	sorted = *list;
	current = (*list)->next;

	while (current != NULL)
	{
		if (sorted != NULL &&  current->n < sorted->n)
		{

			current = swap(&current, &sorted);
			sorted = current->prev;
			if (sorted == NULL)
				*list = current;
			print_list(*list);

			while (sorted != NULL && current->n < sorted->n)
			{
				current = swap(&current, &sorted);
				sorted = current->prev;
				if (sorted == NULL)
					*list = current;
				print_list(*list);
			}
		}
		else
		{
			sorted = current;
			current = sorted->next;
		}
	}
}

/**
 * swap - Swaps the numbers in the array to put them in order
 * @current: Pointer to a pointer to a node in the linked list
 * @sorted: Pointer to a pointer to a node in the linked list
 * Return: A pointer to the current node.
 */
listint_t *swap(listint_t **current, listint_t **sorted)
{
	listint_t *tmp;

	tmp = (*current)->next;
	if (*sorted != NULL)
		(*sorted)->next = tmp;
	if (tmp != NULL)
	{
		tmp->prev = *sorted;
	}
	if (*current != NULL)
		(*current)->next = *sorted;
		(*current)->prev = (*sorted)->prev;
	if ((*sorted)->prev != NULL)
		(*sorted)->prev->next = *current;
	((*sorted)->prev) = *current;

	return (*current);
}
