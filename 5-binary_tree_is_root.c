#include "binary_trees.h"

/**
  * binary_tree_is_root - checks to see if root node
  * @node: is a pointer to the node to check
  * Return: 1 if node is a root, otherwise 0
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* binary_tree_print(node); */
	/* printf("\n\n"); */
	/* if (node == NULL) */
	if (!node)
		return (0);

	if (node->parent)
		return (0);

	return (1);
	/* return (!node && node->parent ? 0 : 1); */
}
