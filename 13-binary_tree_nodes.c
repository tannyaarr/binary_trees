#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree is a pointer to the root node of the tree to count the nodes
 * Return number of nodes  with at least 1 child in the binary tree, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

        if (tree == NULL)
                return (0);

        if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
