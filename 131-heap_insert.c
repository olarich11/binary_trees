#include "binary_trees.h"

/**
 * heap_insert - Adds a value to a Max Binary Heap.
 * @root: A pointer to the root node of the Heap where value to insert.
 * @value: The value to store in the node
 *
 * Return: A pointer to the created node
 *         or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *tree, *new, *flip;
	int size, leaves, sub, bit, level, tmp;

	if (!root)
		return (NULL);
	if (!(*root))
		return (*root = binary_tree_node(NULL, value));
	tree = *root;
	size = binary_tree_size(tree);
	leaves = size;
	for (level = 0, sub = 1; leaves >= sub; sub *= 2, level++)
		leaves -= sub;
	/* subtract all nodes except for bottom-most level */

	for (bit = 1 << (level - 1); bit != 1; bit >>= 1)
		tree = leaves & bit ? tree->right : tree->left;
	/*
	 * Traverse the tree to first empty slot based on the binary
	 * representation of the number of leaves.
	 *
	 * Example -
	 * If there are 12 nodes in a complete tree, there are 5 leaves on
	 * the 4th tier of the tree. 5 in binary is 101. 1 corresponds to
	 * moving right, and 0 to  movingleft.
	 * The first empty node is 101 == RLR, *root->right->left->right
	 */

	new = binary_tree_node(tree, value);
	leaves & 1 ? (tree->right = new) : (tree->left = new);

	flip = new;
	for (; flip->parent && (flip->n > flip->parent->n); flip = flip->parent)
	{
		tmp = flip->n;
		flip->n = flip->parent->n;
		flip->parent->n = tmp;
		new = new->parent;
	}
	/* Flip values with parent until parent value exceeds new value */
	return (new);
}

/**
 * binary_tree_size - Calculate the number of node in a binary tree
 * @tree: The tree node for which to measure the size
 *
 * Return: Number of node size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
