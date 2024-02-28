#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to tree
 * Return: number of nodes with children, 0 if it's null
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	nodes += ((tree->right || tree->left) ? 1 : 0);
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
