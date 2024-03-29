#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least one child in binary tree
 * @tree: A pointer to the root node of the tree.
 * Return: The number of nodes with at least one child, or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c, left, right;

	c = 0;
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);
		c = left + right + 1;
		return (c);
	}


	return (c);
}
