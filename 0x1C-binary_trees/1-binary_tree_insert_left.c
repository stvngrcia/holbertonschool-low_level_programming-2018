#include "binary_trees.h"

/**
 * binary_tree_insert_left -inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: The value of the node to insert
 * Return: A pointer to the newly added node. Or NULL if failure occurs.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}
	return (new_node);
}
