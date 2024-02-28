#include "binary_trees.h"

/**
 * perfectF - function to check if tree is perfect
 * @tree: pointer to tree
 * Return: 1 if perfect, 0 if not
*/

int perfectF(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + perfectF(tree->left);
		r = 1 + perfectF(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	if (!(tree->left) && !(tree->right))
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to tree
 * Return: 1 if perfect, 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0;

	if (!tree)
		return (perfect);
	perfect = perfectF(tree);
	if (perfect != 0)
		return (1);
	return (0);
}
