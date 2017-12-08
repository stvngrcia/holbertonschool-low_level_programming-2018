#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given position.
 * @h: Pointer to a pointer to the first node on a linked list.
 * @idx: Position for node to be inserted.
 * @n: Number in the node.
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;
	unsigned int counter;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	tmp = *h;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = new_node;
		else
		{
			new_node->next = tmp;
			tmp->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}
	for (counter = 0; tmp->next != NULL || counter + 1 == idx; counter++)
	{
		if (counter + 1 == idx)
		{
			if (tmp->next != NULL)
				tmp->next->prev = new_node;
			new_node->next = tmp->next;
			tmp->next = new_node;
			new_node->prev = tmp;
			return (new_node);
		}
		tmp = tmp->next;
	}
	free(new_node);
	return (NULL);
}
