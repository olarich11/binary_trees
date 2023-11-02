#include "binary_trees.h"

/**
 * binary_tree_inorder - Pointer to root of tree perform in order traversal.
 * @tree: Pointer to the tree's root node for traversal.
 * @func: Pointer to a callback function to invoke for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
