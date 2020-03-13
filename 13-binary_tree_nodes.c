#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count the number of
 * Return: If tree is NULL, the function must return 0
 *         A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t left_node, right_node;

	left_node = right_node = 0;

	printf("\n");
	binary_tree_print(tree);
        /* if (tree == NULL || (tree->left == NULL && tree->right == NULL))  */
	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_node = binary_tree_nodes(tree->left);
	printf("left_node: %ld\n", left_node);
	right_node = binary_tree_nodes(tree->right);
	printf("right_node: %ld\n", right_node);

	/**/
	if (tree->left || tree->right)
	{
		printf("tree->left || tree->right \n");
		printf("return: %ld\n", 1 + left_node + right_node);
		return (1 + left_node + right_node);
	}

	printf("if !(tree->left || tree->right) \n");
	printf("return: %ld\n", left_node + right_node);
	return (left_node + right_node);


	/* return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right)); */
}
