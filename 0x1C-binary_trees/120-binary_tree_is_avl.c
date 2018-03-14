#include "binary_trees.h"
#include <stdio.h>
int balance_factor(const binary_tree_t *tree, int);
size_t calculate_size(const binary_tree_t *tree, size_t size);
int is_bst(const binary_tree_t *tree, binary_tree_t **numbers);

/**
 * binary_tree_is_avl - Checks if a tree is a valid avl tree.
 * @tree: Pointer to the root node of a possible bst tree.
 * Return: 1 if tree is a valid AVL. Otherwise 0.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int factor;
	int value;
	size_t idx;
	size_t size;
	binary_tree_t **numbers;

	if (tree == NULL)
		return (0);
	size = 0;
	size = calculate_size(tree, size);
	numbers = malloc(size * sizeof(binary_tree_t *));
	if (numbers == NULL)
		return (0);
	for (idx = 0; idx < size; idx++)
		numbers[idx] = NULL;
	value = 0;
	factor = balance_factor(tree, value);
	if (factor == -1)
	{
		return (0);
		free(numbers);
	}

	value = is_bst(tree, numbers);
	free(numbers);
	return (value);
}

/**
 * balance_factor - Calculates the balance factor of a tree.
 * @tree: Pointer to the root node of a tree.
 * @value: The size of a branch up to a node.
 * Return: 0 or positive integer if tree is balanced. -1 Otherwise.
 */
int balance_factor(const binary_tree_t *tree, int value)
{
	int factor;
	int right;
	int left;

	right = value;
	left = value;
	if (tree == NULL)
		return (0);
	left = left + balance_factor(tree->left, left);
	right = right + balance_factor(tree->right, right);

	if (left == -1 || right == -1)
		return (-1);
	factor = left - right;

	if (factor < -1 || factor > 1)
		return (-1);
	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * is_bst - Checks if a tree is orginized as a BST
 * @tree: Pointer to the root of the tree.
 * @numbers: Pointer to an array that contains the numbers in order.
 * Return: 1 if BST. Otherwise 0.
 */
int is_bst(const binary_tree_t *tree, binary_tree_t **numbers)
{
	int idx;
	int value;

	idx = 0;
	if (tree == NULL)
		return (1);

	value = is_bst(tree->left, numbers);
	if (value == 0)
		return (0);
	while (numbers[idx] != NULL)
		idx++;

	numbers[idx] = (binary_tree_t *)tree;
	if (idx > 0 && (numbers[idx])->n <= (numbers[idx - 1])->n)
		return (0);
	value = is_bst(tree->right, numbers);
	return (value);
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
