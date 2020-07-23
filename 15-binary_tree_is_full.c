#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: is a pointer to the root node of the tree to the check
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        int left = 0, right = 0;

        if (tree == NULL)
        {
                return (1);
        }

        if (tree->left == NULL && tree->right == NULL)
        {
                return (1);
        }

        left = binary_tree_is_full(tree->left);
        right = binary_tree_is_full(tree->right);

        if (tree->left != NULL && tree->right != NULL)
        {
                return (left && right);
        }

        return (0);
}
