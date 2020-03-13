#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	/* if (tree->left == NULL && tree->right == NULL) */
	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}


/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left != NULL)
		left_height++;

	if (tree->right != NULL)
		right_height++;

	return (left_height - right_height);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_tree, right_tree;

	left_tree = right_tree = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) != 0)
		return (0);

	/* both child has not children*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* both child has children */
	if (tree->left && tree->right)
	{
		left_tree = binary_tree_is_perfect(tree->left);
		right_tree = binary_tree_is_perfect(tree->right);

		return (left_tree && right_tree);
	}

	return (0);
}
