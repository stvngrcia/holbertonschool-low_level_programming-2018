#include "binary_trees.h"
size_t count_leaves(const binary_tree_t *tree, size_t leaves);

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of leaves
 * Return: The number of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);
	leaves = 0;
	leaves = count_leaves(tree, leaves);
	return (leaves);
}

/**
 * count_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of leaves
 * @leaves: The number of leaves in the binary tree.
 * Return: The number of leaves.
 */
size_t count_leaves(const binary_tree_t *tree, size_t leaves)
{
	size_t left;
	size_t right;

	left = leaves;
	right = leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = count_leaves(tree->left, leaves);
	right = count_leaves(tree->right, leaves);

	return (left + right);
}
