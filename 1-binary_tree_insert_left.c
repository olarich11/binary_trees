#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds a new left-child to a binary tree.
 * @parent: Pointer to the node where the left-child in should be inserted.
 * @value: The Value to place in the new node.
 *
 * Return: In case parent is NULL or an error arises - NULL.
 *         Otherwise - Pointer to the new node.
 *
 * Description: If parent node already has a left-child, the newly node
 *              takes its position and the formal left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
