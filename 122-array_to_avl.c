#include "binary_trees.h"

/**
 * array_to_avl - Constructs an AVL tree from an array.
 * @array: A pointer to the first element of the array to convert.
 * @size: The number of elements in @array.
 *
 * Return: Pointer to the root node of the created AVL tree, or NULL upon fail.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (avl_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
