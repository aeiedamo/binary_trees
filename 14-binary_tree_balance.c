#include "binary_trees.h"

/**
 * binary_tree_heightB - function that measures the height of
 * a binary tree
 * @tree: pointer to tree
 * Return: height of a binary tree, 0 if tree is null
*/

size_t binary_tree_heightB(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = 1 + binary_tree_heightB(tree->left);
	if (tree->right)
		r = 1 + binary_tree_heightB(tree->right);
	if (l > r)
		return (l);
	return (r);
}

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to tree
 * Return: the balance factor, 0 if it's null
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = 1 + binary_tree_heightB(tree->left);
	if (tree->right)
		r = 1 + binary_tree_heightB(tree->right);
	return (l - r);
}
