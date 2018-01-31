#include "sort.h"
void swap(listint_t **list, listint_t **current, int, listint_t **up);
/**
 *
 *
 *
 *
 */
void cocktail_sort_list(listint_t **list)
{
	int flag;
	listint_t *up;
	listint_t *low;
	listint_t *current;

	low = *list;
	current = low;
	flag = 1;

	for(up = *list; up->next != NULL;)
		up = up->next;

	while (low != up)
	{
		while(current != up)
		{
			if (current->n > current->next->n)
			{
				flag = 0;
				swap(list, &current, 0, &up);
				print_list(*list);
			}

			else
				current = current->next;
			if (current->prev == up)
			{
				up = current;
				printf("hello");
				printf("--- %d ---\n", up->n);
			}

		}
		if (flag == 0)
		{
			up = up->prev;
			flag = 1;
		}
		printf("--- %d ---\n", up->n);
		current = up;
		while(current != low)
		{
			if (current->n < current->prev->n)
			{
				swap(list, &current, 1, &up);
				print_list(*list);
			}

			else
				current = current->prev;
			if (current->next == low)
				low = current;
		}
		low = low->next;
		current = low;
	}
}

void swap(listint_t **list, listint_t **current, int flag, listint_t **up)
{
	listint_t *tmp;

	if (flag == 1)
		*current = (*current)->prev;
	tmp = (*current)->next;

	if (tmp != NULL)
	{
		(*current)->next = tmp->next;
		tmp->next = *current;
		tmp->prev = (*current)->prev;
	}
	if ((*current)->next != NULL)
		(*current)->next->prev = *current;
	if ((*current)->prev != NULL)
		(*current)->prev->next = tmp;
	(*current)->prev = tmp;

	if (tmp->prev == NULL)
		*list = tmp;

	if (tmp == *up)
		*up = *up;
}

