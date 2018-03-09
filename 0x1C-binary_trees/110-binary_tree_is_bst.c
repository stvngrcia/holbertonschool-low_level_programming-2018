#include "binary_trees.h"
#include <stdio.h>
int is_bst(const binary_tree_t *tree, binary_tree_t **numbers);
size_t calculate_size(const binary_tree_t *tree, size_t size);


/**
 * binary_tree_is_bst - Checks if a tree is orginized as a BST
 * @tree: Pointer to the root of the tree.
 * Return: 1 if BST. Otherwise 0.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	size_t size;
	size_t idx;
	binary_tree_t **numbers;
	int value;

	if (tree == NULL)
		return (0);
	size = 0;
	size = calculate_size(tree, size);
	numbers = malloc(size * sizeof(binary_tree_t *));
	if (numbers == NULL)
		return (0);
	for (idx = 0; idx < size; idx++)
		numbers[idx] = NULL;

	value = is_bst(tree, numbers);
	free(numbers);
	return (value);
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
