#include "binary_trees.h"
#include <stdio.h>

void tree_traverse(queue_t **head, void (*func)(int));
void add_to_queue(queue_t **queue,  binary_tree_t *child);
queue_t *pop(queue_t **queue);

/**
 * binary_tree_levelorder - Prints a tree in a level by level order.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *head;

	head = NULL;
	if (tree == NULL || func == NULL)
		return;
	add_to_queue(&head, (binary_tree_t *)tree);
	tree_traverse(&head, func);
}


/**
 * tree_traverse - Traverses the binary tree based on the queue.
 * @head: Pointer to a pointer to the first node in the queue.
 * @func: Pointer to a function that prints the numbers.
 */
void tree_traverse(queue_t **head, void (*func)(int))
{
	queue_t *poped_node;

	if (head == NULL || *head == NULL || func == NULL)
		return;
	poped_node = pop(head);
	if (poped_node == NULL)
		return;
	add_to_queue(head, poped_node->child->left);
	add_to_queue(head, poped_node->child->right);
	func(poped_node->child->n);
	free(poped_node);
	tree_traverse(head, func);

}
/**
 * add_to_queue - Adds a node to the queue
 * @head: Pointer to a pointer to the first node in the queue.
 * @child: Node to add to the queue.
 */
void add_to_queue(queue_t **head, binary_tree_t *child)
{
	queue_t *node;
	queue_t *tmp;

	if (head == NULL || child == NULL) /****/
		return;
	tmp = *head;
	node = malloc(sizeof(queue_t));
	node->child = child;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return;
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;
}

/**
 * pop - Removes the top number in the queue.
 * @head: Head node in the queue.
 * Return: The number that was poped.
 */
queue_t *pop(queue_t **head)
{
	queue_t *node;

	if (head == NULL || *head == NULL)
		return (NULL);
	node = *head;
	*head = node->next;
	return (node);
}
