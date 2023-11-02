#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 * @node: Pointer to the node for which you want find the sibling.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - Pointer to the sibling if it exists.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
