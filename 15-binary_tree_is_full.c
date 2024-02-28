#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to tree
 * Return: 1 if full, 0 otherwise
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	if (tree->right && tree->left)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
		if (l == 0 || r == 0)
			return (0);
		return (1);
	}
	else if (!(tree->right) && !(tree->left))
		return (1);
	return (0);
}
