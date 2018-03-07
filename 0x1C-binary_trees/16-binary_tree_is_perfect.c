#include "binary_trees.h"
int is_perfect(const binary_tree_t *h, const binary_tree_t *tree, int size);

/**
 * binary_tree_is_perfect - Checks if a tree if perfect.
 * @tree: Pointer to the head of the tree.
 * Return: 1 if the tree is perfect. Otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result;
	int size;

	if (tree == NULL)
		return (0);
	size = 0;
	result = is_perfect(tree, tree, size);
	return (result);
}

/**
 * is_perfect - Checks if a tree if perfect.
 * @h: Pointer to original head.
 * @tree: Pointer to the head of the tree.
 * @size: size of the tree.
 * Return: 1 if the tree is perfect. Otherwise 0.
 */
int is_perfect(const binary_tree_t *h, const binary_tree_t *tree, int size)
{
	int right;
	int left;

	left = size;
	right = size;

	if (tree == NULL)
		return (0);

	left = left + is_perfect(h, tree->left, left);
	right = right + is_perfect(h, tree->right, right);
	if (tree->left == NULL && tree->right != NULL)
		return (-1);
	if (tree->left != NULL && tree->right == NULL)
		return (-1);
	if (right < 0 || left < 0)
		return (-1);
	if (tree == h)
	{
		if (right != left)
			return (0);
		else
			return (1);
	}
	if (right > left)
		return (right + 1);
	return (left + 1);
}
