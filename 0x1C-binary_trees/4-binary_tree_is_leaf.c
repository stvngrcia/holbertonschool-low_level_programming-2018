#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a nde is a leaf or not.
 * @node: The node to check for leaf.
 * Return: 1 if the node is a leaf. 0 Otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
