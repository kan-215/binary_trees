#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right -inserts a node as the right-child of another node
 * @parent:A  Pointer to the node to insert the right-child in.
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the newly  created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	return (NULL);

	/* If parent already has a right child,*/
	/*Then set it as the right child of the new node */
	if (parent->right != NULL)
	{
	new_node->right = parent->right;
	new_node->right->parent = new_node;
	}
	/* Set the new created  node as the right child of the parent */
	parent->right = new_node;

	return (new_node);
}
