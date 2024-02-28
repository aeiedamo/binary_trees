#include "binary_trees.h"

/**
 * binary_tree_node - function to create a node
 * @parent: pointer to parent node
 * @value: value to store in a node
 * Return: pointer to the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_node));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}