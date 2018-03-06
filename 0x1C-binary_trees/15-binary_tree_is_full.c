#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full.
 * @tree: pointer to the root node of the tree to check
 * Return: If the tree if a full tree 1. Otherwise 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int value;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	value = binary_tree_is_full(tree->left);
	if (value == 0)
		return (value);
	value = binary_tree_is_full(tree->right);
	if (value == 0)
		return (value);
	return (1);
}
