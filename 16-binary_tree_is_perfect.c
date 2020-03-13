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

	printf("\n\n");
	binary_tree_print(tree);

	/* if tree == NULL*/
	/* if (tree->left == NULL && tree->right == NULL) */
	if (!tree || (!tree->left && !tree->right))
		return (0);

	/* if (tree-> left != NULL)*/
	if (tree->left)
	{
		left = binary_tree_height(tree->left) + 1;
		printf("\nleft increment: %ld\n", left);
	}

	/* if (tree-> left != NULL)*/
	if (tree->right)
	{
		right = binary_tree_height(tree->right) + 1;
		printf("\nright increment: %ld\n", right);
	}

	/* left_height > right_height */
	if (left > right)
	{
		printf("\nreturn: %ld\n", left);
		return (left);
	}
	printf("return: %ld\n", right);
	return (right);
	/* return (right > left ? right : left); */
}

/**
 * binary_tree_balance -
 *
 * @tree:
 * Return: if tree is weighted left, return positive
 *         if tree is weighted right, return negative.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* if (tree == NULL) */
	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

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

        /* if the tree is a balance tree */
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
