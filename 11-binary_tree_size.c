#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, right;

	size = 0;

	if (tree == NULL)
		return (size);

	size = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	size = size + right + 1;

	return (size);
}
