#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	printf("\n");
	binary_tree_print(tree);
        /* if (tree == NULL) */
	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	printf("left_size %ld\n", left_size);
	right_size = binary_tree_size(tree->right);
	printf("right_size %ld\n", right_size);

	return (1 + left_size + right_size);

}
