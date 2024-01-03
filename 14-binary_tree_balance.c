#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the balance factor
 * Return 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

        if (tree == NULL)
                return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

        return (height_left) - (height_right);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree is a pointer to the root node of the tree to measure the hight.
 * Return height of the binary tree 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t height_left, height_right;

        if (tree == NULL)
        {
                return (0);
        }
        height_left = binary_tree_height(tree->left);
        height_right = binary_tree_height(tree->right);

        return (height_left > height_right) ? height_left + 1 : height_right + 1;
}
