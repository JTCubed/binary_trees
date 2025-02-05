#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;


	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);



	if (tree->left != NULL && tree->right != NULL)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (left && right);
	}

	return (0);

}
