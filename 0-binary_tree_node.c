#include "binary_trees.h"

/**
 * binary_tree_node - Generate a node for a binary tree.
 * @parent: Pointer referring to to the parent of the new node to create.
 * @value: The value assigned to the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - Pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
