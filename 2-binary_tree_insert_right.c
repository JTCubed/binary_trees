#include "binary_trees.h"
/**
 * binary_tree_insert_right - Measures the height of a binary tree.
 * @parent: A pointer to the root node of the tree to measure.
 * @value: value to be added
 * Return: The height of the tree, or 0 if tree is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = new;
		return (new);
	}

	new->right = parent->right;
	new->parent = parent;
	parent->right->parent = new;
	parent->right = new;

	return (new);
}
