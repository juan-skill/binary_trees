#include "binary_trees.h"

/**
* binary_tree_node - creates a node in the tree.
* @parent: is a pointer to the parent node of the node to create
* @value: is the value to put in the new node
* Return: a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = node->right = NULL;

	return (node);
}
