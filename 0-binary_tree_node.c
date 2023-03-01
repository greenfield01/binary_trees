#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 * @parent: A point to the parent node
 * @value: the value of the new node
 *
 * Return: if error, Null else pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
