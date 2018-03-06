#include "binary_trees.h"

/**
 * binary_tree_postorder - Prints the values of a binary tree post-order.
 * @tree: Node to be printed.
 * @func: Function that prints the number
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
