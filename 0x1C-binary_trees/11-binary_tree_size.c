#include "binary_trees.h"
size_t calculate_size(const binary_tree_t *treetree, size_t size);

/**
 * binary_tree_size - Calculates the size of a binary tree.
 * @tree: The node representing the root of the tree.
 * Return: The size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = 0;
	size = size + calculate_size(tree, size);
	return (size);
}

/**
 * calculate_size - Calculates the size of a binary tree
 * @tree: The node representing the root of the tree.
 * @size: The size of the tree
 * Return: The size of the tree
 */
size_t calculate_size(const binary_tree_t *tree, size_t size)
{
	size_t left;
	size_t right;

	left = size;
	right = size;
	if (tree == NULL)
		return (0);

	left = left + calculate_size(tree->left, left);
	right = right + calculate_size(tree->right, right);
	return (left + right + 1);
}
