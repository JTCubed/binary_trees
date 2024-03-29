#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t num, left, right;

	if (tree == NULL)
		return (0);

	left = 0;

	if (tree->left == NULL && tree->right == NULL)
		return (left);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);


	if (left >= right)
		num = left + 1;
	else
	{
		num = right + 1;
	}
	return (num);
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The balance factor of the tree, or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, diff;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (tree->left != NULL)
	{
		left += 1;
	}
	else
	{
		left = 0;
	}

	if (tree->right != NULL)
	{
		right += 1;
	}
	else
	{
		right = 0;
	}

	diff = left - right;

	return (diff);
}
