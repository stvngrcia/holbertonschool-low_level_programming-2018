#include "binary_trees.h"
size_t count_nodes(const binary_tree_t *tree, size_t nodes);

/**
 * binary_tree_nodes - Counts the nodes in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: The number of nodes in the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = 0;
	if (tree == NULL)
		return (0);
	nodes = count_nodes(tree, nodes);
	return (nodes);
}

/**
 * count_nodes - Counts the nodes in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * @nodes: The number of nodes in the tree.
 * Return: The number of nodes in the tree.
 */
size_t count_nodes(const binary_tree_t *tree, size_t nodes)
{
	size_t left;
	size_t right;

	left = nodes;
	right = nodes;
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodes = nodes + 1;
	left = left + count_nodes(tree->left, left);
	right = right + count_nodes(tree->right, right);
	return (nodes + right + left);
}
