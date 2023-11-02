#include "binary_trees.h"

/**
 * binary_tree_postorder - Pointer to root of tree perform postorder traversal.
 * @tree: Pointer to the tree's root node for traversal.
 * @func: Pointer to a function for processing node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
