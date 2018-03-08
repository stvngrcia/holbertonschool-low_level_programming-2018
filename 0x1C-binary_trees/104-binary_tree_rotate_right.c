#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotates a tree to the right.
 * @tree: Pointer to the root of the tree.
 * Return: The new root of the tree.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_parent;

	if (tree == NULL)
		return (NULL);
	new_parent = tree->left;
	new_parent->parent = NULL;
	tree->left = new_parent->right;
	if (tree->left != NULL)
		tree->left->parent = tree;
	tree->parent = new_parent;
	new_parent->right = tree;
	return (new_parent);
}
