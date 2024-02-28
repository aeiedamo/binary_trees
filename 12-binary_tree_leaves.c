#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to tree
 * Return: number of leaves in a binary tree, 0 if it's null
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, l = 0, r = 0;

	if (!tree)
		return (0);
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	leaves = l + r;
	return ((!l && !r) ? (leaves + 1) : leaves);
}

