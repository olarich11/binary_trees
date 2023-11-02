#include "binary_trees.h"

/**
 * binary_tree_is_root - Determines whether a node is a root in a binary tree.
 * @node: Reference to the node under examination.
 *
 * Return: 1 - if it's the root.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
