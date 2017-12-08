#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the first node of a linked list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
