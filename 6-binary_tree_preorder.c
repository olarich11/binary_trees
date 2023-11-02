#include "binary_trees.h"

/**
 * binary_tree_preorder - Traversing a binary tree in a pre-order manner.
 * @tree: Pointer to the tree's root node for traversal.
 * @func: Pointer to a callback function to invoke for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
