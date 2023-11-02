#include "binary_trees.h"

/**
 * binary_tree_depth - Determines the node depth in binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, function return 0, else return depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
