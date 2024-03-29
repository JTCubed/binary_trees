#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the node's uncle.
 * @first: A pointer to the node.
 * @second: A pointer to the second node.
 * Return: A pointer to the common ancestor, or NULL if tree is NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const
				     binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (binary_tree_is_ancestor(first, second))
		return ((binary_tree_t *)first);

	if (binary_tree_is_ancestor(second, first))
		return ((binary_tree_t *)second);

	return (binary_trees_ancestor(first->parent, second->parent));
}

/**
 * binary_tree_is_ancestor - Finds if the node is an ancestor.
 * @node: A pointer to the node.
 * Return: 1 if an ancestor zero if not
 */
int binary_tree_is_ancestor(const binary_tree_t *a, const binary_tree_t *b)
{
	if (b == NULL)
		return (0);

	if (a == b)
		return (1);

	return (binary_tree_is_ancestor(a, b->parent));

}
