#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of a doubly linked list.
 * @head: Pointer to a pointer to the first node of a linked list.
 * @n: Integer value to add to a linked list node.
 * Return: Upon sucess the address of the new element, otherwise NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	new_node = create_node3(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}


/**
 * create_node3 - Creates a node.
 * @n: Integer value to add to a linked list node.
 * Return: Upon sucess pointer to a dlistint_t node. Otherwise NULL
 */
dlistint_t *create_node3(const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;
	return (new_node);
}
