#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Determines whether a node is a leaf in a binary tree.
 * @node: Reference to the node under examination.
 *
 * Return: 1 - if it's a leaf.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
