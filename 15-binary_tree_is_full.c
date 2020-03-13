#include "binary_trees.h"

/**
 * traverse_full - recursively traverse the tree
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not
 */
int traverse_full(const binary_tree_t *tree)
{
	/* int left, right; */

	/* left = 0; */
	/* right = 0; */
	if (!tree)
		return (1);
	/* { */
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	/* left = traverse_full(tree->left); */
	/* right = traverse_full(tree->right); */
	if (traverse_full(tree->left) == 0 || traverse_full(tree->right) == 0)
		return (0);
	else
		return (1);
	/* } */
	/* return (1); */
}

/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (traverse_full(tree));
}
