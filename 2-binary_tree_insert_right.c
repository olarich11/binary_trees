#include "binary_trees.h"

/**
 * binary_tree_insert_right - Add a new right-child node
 *                            to a binary tree.
 * @parent: Pointer to the node where the right-child in should be inserted.
 * @value: The value to palced in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - Pointer to the new node.
 *
 * Description: If the parent node already has a right-child, the newly node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
