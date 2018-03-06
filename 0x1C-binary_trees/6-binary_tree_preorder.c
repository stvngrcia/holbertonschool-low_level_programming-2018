#include "binary_trees.h"

/**
 * binary_tree_preorder - Prints the values of a binary tree in pre-order.
 * @tree: Node to be printed.
 * @func: Function that prints the number
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
