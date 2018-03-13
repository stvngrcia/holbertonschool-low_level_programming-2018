#include "binary_trees.h"
bst_t *find_grand_child(bst_t *node);

/**
 * bst_remove - Removes a node from a binary tree
 * @root: Pointer to the root node of the tree.
 * @value: Is the value to remove in the tree.
 * Return: pointer to root node of the tree after removing the desired value.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *found_node;
	bst_t *grand_child;

	if (root == NULL)
		return (NULL);
	found_node = bst_search(root, value);
	if (found_node == NULL)
		return (root);
	grand_child = find_grand_child(found_node);
	if (grand_child == NULL)
		return (root);
	if (found_node->left == grand_child)
		grand_child->left = NULL;
	else
		grand_child->left = found_node->left;
	if (found_node->right == grand_child)
		grand_child->right = NULL;
	else
		grand_child->right = found_node->right;
	grand_child->parent->left = NULL; /**/
	grand_child->parent = found_node->parent;
	if (grand_child->right != NULL)
		grand_child->right->parent = grand_child;
	if (grand_child->left != NULL)
		grand_child->left->parent = grand_child;
	if (grand_child->parent == NULL)
	{
		free(found_node);
		return (grand_child);
	}
	if (found_node->parent->n > value)
		found_node->parent->left = grand_child;
	else
		found_node->parent->right = grand_child;
	free(found_node);
	return (root);
}

/**
 * find_grand_child - Finds the grand child of a node.
 * @node: The node for which we are finding the grand child.
 * Return: pointer to a node representing the grand child of the original node.
 */
bst_t *find_grand_child(bst_t *node)
{
	bst_t *grand_child;
	bst_t *tmp;

	if (node->right == NULL && node->left == NULL)
	{
		if (node->n > node->parent->n)
			node->parent->right = NULL;
		else
			node->parent->left = NULL;
		free(node);
		return (NULL);
	}

	if (node->right != NULL)
	{
		tmp = node->right;
		grand_child = node->right->left;
	}
	else if (node->left != NULL)
	{
		tmp = node->left;
		grand_child = node->left->left;
	}
	if (grand_child == NULL)
		grand_child = tmp;
	return (grand_child);
}

/**
 * bst_search - searches for a value in a Binary Search Tree.
 * @tree: pointer to the root node of the BST to search
 * @value: the value to search in the tree
 * Return: If found pointer to the node containing a value equals to value.
 * Otherwise NULL.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node;

	if (tree == NULL)
		return (NULL);
	if (value == tree->n)
		return ((bst_t *)tree);
	if (value < tree->n)
		node = bst_search(tree->left, value);
	else if (value > tree->n)
		node = bst_search(tree->right, value);

	return (node);
}
