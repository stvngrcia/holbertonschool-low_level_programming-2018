#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: The first node to check.
 * @second: The second node to check.
 * Return: A pointer to the lowest ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *tmp1;
	binary_tree_t *tmp2;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);

	tmp1 = (binary_tree_t *)first;
	for (; tmp1 != NULL; tmp1 = tmp1->parent)
	{
		tmp2 = (binary_tree_t *)second;
		for (; tmp2 != NULL; tmp2 = tmp2->parent)
		{
			if (tmp1 == tmp2)
				return (tmp1);
		}
	}

	return (NULL);
}
