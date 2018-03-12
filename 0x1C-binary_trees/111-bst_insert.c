#include "binary_trees.h"
bst_t *find_parent_node(bst_t *tree, int value);

/**
 * bst_insert - Inserts a node in a binary tree.
 * @tree: Pointer to a pointer to the root of the tree.
 * @value: the number that is going to be inserted in the tree
 * Return: Pointer to the node or NULL.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *hold;
	bst_t *node;

	if (tree == NULL)
		return (NULL);
	node = binary_tree_node(NULL, value);
	if (node == NULL)
		return (NULL);
	if (*tree == NULL)
		*tree = node;
	else
	{
		hold = find_parent_node(*tree, value);
		node->parent = hold;
		if (value == hold->n)
		{
			free(node);
			node = NULL;
		}
		else if (value < hold->n)
			hold->left = node;
		else if (value > hold->n)
			hold->right = node;
	}
	return (node);
}

/**
 * find_parent_node - Finds the parent of the node that needs to be inserted
 * @tree: Pointer to the node.
 * @value: Value to compare against.
 * Return: A pointer to a node.
 */
bst_t *find_parent_node(bst_t *tree, int value)
{
	if (value == tree->n)
		return (tree);
	if (tree->left != NULL && value <= tree->n)
		tree = find_parent_node(tree->left, value);
	else if (tree->right != NULL && value > tree->n)
		tree = find_parent_node(tree->right, value);
	return (tree);
}
