#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of
 * a node in a binary tree
 * @tree: pointer to tree
 * Return: the depth of a node in a binary tree, 0 if it's null
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
