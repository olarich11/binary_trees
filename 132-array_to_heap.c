#include "binary_trees.h"

/**
 * array_to_heap - Create a Max Binary Heap tree from an array.
 * @array: A pointer to the initial element of the array to be transform.
 * @size: The number of element in the array.
 *
 * Return: A pointer to the root node of the created Binary Heap.
 *         or NULL if the conversation fails.
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
