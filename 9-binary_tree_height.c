#include "binary_trees.h"

/**
 * binary_tree_height -function  measures the height of a binary tree.
 * @tree: pointer to the root node of the tree whose height is to be measured
 *
 * Return: Height of the tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
	size_t length = 0, rad = 0;

	length = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rad = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((length > rad) ? length : rad);
	}
	return (0);
}
