#include "binary_trees.h"
/**
 * binary_tree_insert_left - Measures the height of a binary tree.
 * @parent: A pointer to the root node of the tree to measure.
 * @value: value to be inserted
 * Return: The height of the tree, or 0 if tree is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left == NULL)
	{
		parent->left = new;
		return (new);
	}

	new->left = parent->left;
	new->parent = parent;
	parent->left->parent = new;
	parent->left = new;

	return (new);
}
