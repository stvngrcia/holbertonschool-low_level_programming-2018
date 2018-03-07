#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp;

	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);

	tmp = (binary_tree_t *)first;

	while(tmp != NULL)
	{
		if (tmp == second->parent)
			return (tmp);
		tmp = tmp->parent;
	}

	tmp = (binary_tree_t *)second;
	while(tmp != NULL)
	{
		if (tmp == first->parent)
			return(tmp);
		tmp = tmp->parent;
	}
	return (NULL);
}
