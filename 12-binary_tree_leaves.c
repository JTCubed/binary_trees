#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The number of leaves in the tree, or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf, left, right;

	leaf = 0;
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	leaf = left + right;

	return (leaf);
}
