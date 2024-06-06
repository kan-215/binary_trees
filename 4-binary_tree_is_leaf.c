#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if there is a leaf node
 * @node: a pointer to the node
 * Return: leaf node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	return (0);

	return (1);
}
