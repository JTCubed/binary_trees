#include "binary_trees.h"
/**
 * binary_tree_is_root - Measures the height of a binary tree.
 * @node: A pointer to the root node of the tree to measure.
 * Return: The height of the tree, or 0 if tree is NULL.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
