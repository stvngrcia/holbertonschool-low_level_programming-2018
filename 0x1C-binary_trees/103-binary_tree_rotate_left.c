#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a tree to the left.
 * @tree: Pointer to the root of the tree.
 * Return: The new root of the tree.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_parent;

	if (tree == NULL)
		return (NULL);
	new_parent = tree->right;
	new_parent->parent = NULL;
	tree->right = new_parent->left;
	new_parent->left = tree;
	if (tree->right != NULL)
		tree->right->parent = tree;
	tree->parent = new_parent;
	return (new_parent);
}
