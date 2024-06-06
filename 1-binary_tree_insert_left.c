#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_left -Ths function inserts node as left-child of another node
 * @parent:pointer to the node where to insert the left-child
 * @value:the value to be stored in the new node
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    parent->left = new_node;

    return (new_node);
}
