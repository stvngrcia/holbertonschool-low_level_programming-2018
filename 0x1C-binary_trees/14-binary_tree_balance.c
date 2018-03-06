#include "binary_trees.h"
int calculate_diff(const binary_tree_t *, const binary_tree_t *, int);

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root of the current node.
 * Return: The difference between branches.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int diff;

	diff = 0;
	if (tree == NULL)
		return (0);
	diff = calculate_diff(tree, tree, diff);
	return (diff);
}

/**
 * calculate_diff - measures the balance factor of a binary tree.
 * @h: The original root node of the tree.
 * @tree: Pointer to the root of the current node.
 * @diff: The difference between left and right branch
 * Return: The difference between branches.
 */
int calculate_diff(const binary_tree_t *h, const binary_tree_t *tree, int diff)
{
	int right;
	int left;

	right = diff;
	left = diff;
	if (tree == NULL)
		return (0);
	left = left + calculate_diff(h, tree->left, left);
	right = right + calculate_diff(h, tree->right, right);

	if (tree == h)
		return (left - right);
	if (right > left)
		return (right + 1);
	return (left + 1);
}
