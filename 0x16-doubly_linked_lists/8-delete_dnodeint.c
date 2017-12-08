#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a index of a linked list.
 * @head: Pointer to a pointer of the first node of a linked list.
 * @index: The number of the node to be deleted.
 * Return: Sucess 1. Otherwise -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (counter = 0; tmp != NULL; counter++)
	{
		if (counter == index)
		{
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			if (tmp->prev != NULL)
				tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
