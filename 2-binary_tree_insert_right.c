#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to storde in the new_node
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;

        if (parent == NULL)
        {
                return (NULL);
        }
        new_node = malloc(sizeof(binary_tree_t));
        if (new_node == NULL)
        {
                return (NULL);
        }

        new_node->n = value;
        new_node->parent = parent;
        new_node->right = parent->right;
        new_node->left = NULL;

        if (parent->right != NULL)
        {
                parent->right->parent = new_node;
        }
        parent->right = new_node;

        return (new_node);
}
