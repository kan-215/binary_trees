#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through binary tree using post-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * Description: Traverses the binary tree using post-order traversal and
 * calls the provided function for each visited node.
 * The value in each node is passed as a parameter to the function.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
