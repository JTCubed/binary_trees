#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the node's uncle.
 * @node: A pointer to the node.
 * Return: A pointer to the sibling, or NULL if tree is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = malloc(sizeof(binary_tree_t));

	parent = node->parent;

	if (parent->right == node)
		return (parent->left);
	else
		return (parent->right);
}
