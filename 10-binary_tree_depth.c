#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree is a pointer to the node  to measure the depth.
 * Return depth of the node in the binary, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
        size_t depth = 0;

        if (tree == NULL)
                return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
        return (depth);
}
