#include "binary_trees.h"
/**
 * binary_tree_node - Measures the height of a binary tree.
 * @parent: A pointer to the root node of the tree to measure.
 * @value: value to be inserted
 * Return: The pointer to parent of subclass
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;


	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
