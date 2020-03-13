#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree:  is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	right = left = 0;

	/* if tree == NULL*/
	/* if (tree->left == NULL && tree->right == NULL) */
	if (!tree || (!tree->left && !tree->right))
		return (0);

	/* if (tree-> left != NULL)*/
	if (tree->left)
	{
		left = binary_tree_height(tree->left) + 1;
	}

	/* if (tree-> left != NULL)*/
	if (tree->right)
	{
		right = binary_tree_height(tree->right) + 1;
	}

	/* left_height > right_height */
	if (left > right)
	{
		return (left);
	}

	return (right);
}
