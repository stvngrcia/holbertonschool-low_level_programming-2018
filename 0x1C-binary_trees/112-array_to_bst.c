#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: Number of elements in the array.
 * Return: Upon sucess a pointer to the root node. Otherwise NULL.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t idx;
	bst_t *node;
	bst_t *tmp;

	node = NULL;

	for (idx = 0; idx < size; idx++)
	{
		tmp = bst_insert(&node, array[idx]);
		if (tmp == NULL)
			return (NULL);
	}
	return (node);
}
