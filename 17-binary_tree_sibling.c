#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 *
 * @node: is a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 *         if node is NULL or the parent is NULL, return NULL
 *         if node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent && (node->parent)->left != node)
		return ((node->parent)->left);

	else if (node->parent && node->parent->right != node)
		return ((node->parent)->right);
	else
		return (NULL);

}
