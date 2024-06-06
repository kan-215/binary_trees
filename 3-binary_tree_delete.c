#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree:  pointer to the root node
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
	return; /*Do nothing if the tree is NULL*/
	}
	/*Delete the left subtree*/
	binary_tree_delete(tree->left);
	/*Delete the right subtree*/
	binary_tree_delete(tree->right);
	/* Free the current node*/
	free(tree);
}
