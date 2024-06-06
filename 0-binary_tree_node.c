#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node -This function creates a binary tree node
 * @parent: points to the parent node of the node to be created
 * @value: value to put in the new node
 * Return:Created node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Allocate memory for the new node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/* Check the status of  memory allocation */
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* initialize the new node*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
