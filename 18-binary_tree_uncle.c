#include "binary_trees.h"


/**
 * binary_tree_uncle - find the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return:  a pointer to the uncle node
            If node is NULL, return NULL
            If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *father, *father2;

	father = father2 = NULL;

	printf("node %d\n", node->n);
	if (node == NULL)
		return (NULL);

	father = node->parent;
	if (!father)
		return (NULL);
	printf("father %d\n",father->n);

	father2 = father->parent;
	if (!father2)
		return (NULL);
	printf("father2 %d\n", father2->n);

	printf("father2->left %d is equal to father %d\n", father2->left->n, father->n);
	if (father2->left == father)
		return (father2->right);
	else
		return (father2->left);
}
