#include "binary_trees.h"
/**
 * binary_tree_delete - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
