#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: is a pointer to the node to measure the depth
 * Return: if tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	/* if (tree == NULL) */
	if (!tree)
		return (0);

	depth = 0;
	while (tree->parent != NULL)
	{
		printf("\n");
		binary_tree_print(tree);
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
