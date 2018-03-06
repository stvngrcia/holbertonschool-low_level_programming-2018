#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a Binary three using post-order traversal.
 * @tree: Pointer to the parent node
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
