#include "binary_trees.h"


/**
 * binary_tree_height -measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: if tree is NULL return 0, otherwise the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (right < left)
	{
		return (left);
	}

	return (right);
}
