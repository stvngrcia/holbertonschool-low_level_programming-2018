#include "binary_trees.h"
size_t calculate_height(const binary_tree_t *tree, size_t height);

/**
 * binary_tree_height - returns the height of the tree.
 * @tree: The node that will act as root when calculating the height.
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = 0;
	height = calculate_height(tree, height);
	return (height - 1);
}

/**
 * calculate_height - Calculates the height of a binary tree.
 * @tree: The node that will act as root when calculating the height.
 * @height: The actual height of the tree.
 * Return: The height of the tree.
 */
size_t calculate_height(const binary_tree_t *tree, size_t height)
{
	size_t left;
	size_t right;

	left = height;
	right = height;
	if (tree == NULL)
		return (0);
	left = left + calculate_height(tree->left, height);
	right = right + calculate_height(tree->right, height);

	if (left > right)
		return (left + 1);
	return (right + 1);
}
