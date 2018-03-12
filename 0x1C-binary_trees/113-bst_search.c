#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree.
 * @tree: pointer to the root node of the BST to search
 * @value: the value to search in the tree
 * Return: If found pointer to the node containing a value equals to value.
 * Otherwise NULL.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node;

	if (tree == NULL)
		return (NULL);
	if (value == tree->n)
		return ((bst_t *)tree);
	if (value < tree->n)
		node = bst_search(tree->left, value);
	else if (value > tree->n)
		node = bst_search(tree->right, value);

	return (node);
}
