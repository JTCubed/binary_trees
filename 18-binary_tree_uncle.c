#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the node's uncle.
 * @node: A pointer to the node.
 * Return: A pointer to the uncle, or NULL if tree is NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandp;

	if (node == NULL || node->parent == NULL || node->parent->parent ==
	    NULL)
		return (NULL);

	grandp = malloc(sizeof(binary_tree_t));

	if (grandp == NULL)
		return (NULL);

	grandp = node->parent->parent;

	if (grandp->right == node->parent)
	{
		if (grandp->left == NULL)
			return (NULL);

		return (grandp->left);

	}
	else
	{
		if (grandp->right == NULL)
			return (NULL);
		else
			return (grandp->right);
	}
}
