#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to tree
 * Return: size of tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, l = 0, r = 0;

	if (!tree)
		return (0);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	size = r + l + 1;
	return (size);
}
